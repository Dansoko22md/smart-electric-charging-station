////////////////////////////////////////////////////////////////////////////////
//                                                                            //
// This file is part of QOAuth2.                                              //
// Copyright (c) 2014 Jacob Dawid <jacob@omg-it.works>                        //
//                                                                            //
// QOAuth2 is free software: you can redistribute it and/or modify            //
// it under the terms of the GNU Affero General Public License as             //
// published by the Free Software Foundation, either version 3 of the         //
// License, or (at your option) any later version.                            //
//                                                                            //
// QOAuth2 is distributed in the hope that it will be useful,                 //
// but WITHOUT ANY WARRANTY; without even the implied warranty of             //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the              //
// GNU Affero General Public License for more details.                        //
//                                                                            //
// You should have received a copy of the GNU Affero General Public           //
// License along with QOAuth2.                                                //
// If not, see <http://www.gnu.org/licenses/>.                                //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

// Own includes
#include "oauth2service.h"
#include <QUrlQuery>
// Qt includes
#include <QDebug>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>

OAuth2Service::OAuth2Service(QString userCodeUrl,
                             QString tokenUrl,
                             QString clientId,
                             QString clientSecret,
                             QString scope,
                             QObject *parent) :
    QObject(parent)
{
    _userAgent = "qt-oauth2/1.0";
    _oAuthTokenGrantType = "http://oauth.net/grant_type/device/1.0";

    _userCodeAPIEndpoint = QUrl(userCodeUrl);
    _tokenAPIEndpoint = QUrl(tokenUrl);

    _clientId = clientId;
    _clientSecret = clientSecret;

    _scope = scope;

    connect(&_userCodeNetworkAccessManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(userCodeRequestFinished(QNetworkReply*)));
    connect(&_tokenNetworkAccessManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(tokenRequestFinished(QNetworkReply*)));
}

void OAuth2Service::setUserAgent(QString userAgent)
{
    _userAgent = userAgent;
}

QString OAuth2Service::userAgent()
{
    return _userAgent;
}

void OAuth2Service::setOAuthTokenGrantType(QString oAuthTokenGrantType)
{
    _oAuthTokenGrantType = oAuthTokenGrantType;
}

QString OAuth2Service::oAuthTokenGrantType()
{
    return _oAuthTokenGrantType;
}

void OAuth2Service::retrieveUserCode()
{
    QNetworkRequest networkRequest;
    networkRequest.setUrl(_userCodeAPIEndpoint);
    networkRequest.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
    networkRequest.setHeader(QNetworkRequest::UserAgentHeader, _userAgent);

    QString content = QString("client_id=%1&scope=%2")
            .arg(_clientId)
            .arg(_scope);

    _userCodeNetworkAccessManager.post(networkRequest, content.toUtf8());
}

void OAuth2Service::retrieveAccessToken(QString deviceCode)
{
    QNetworkRequest networkRequest;
    networkRequest.setUrl(_tokenAPIEndpoint);
    networkRequest.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
    networkRequest.setHeader(QNetworkRequest::UserAgentHeader, _userAgent);

    QString content = QString("client_id=%1&"
                              "client_secret=%2&"
                              "code=%3&"
                              "grant_type=%4")
            .arg(_clientId)
            .arg(_clientSecret)
            .arg(deviceCode)
            .arg(_oAuthTokenGrantType);

    _tokenNetworkAccessManager.post(networkRequest, content.toUtf8());
}

void OAuth2Service::refreshAccessToken(QString refreshToken)
{
    QNetworkRequest networkRequest;
    networkRequest.setUrl(_tokenAPIEndpoint);
    networkRequest.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
    networkRequest.setHeader(QNetworkRequest::UserAgentHeader, _userAgent);

    QString content = QString("client_id=%1&"
                              "client_secret=%2&"
                              "refresh_token=%3&"
                              "grant_type=%4")
            .arg(_clientId)
            .arg(_clientSecret)
            .arg(refreshToken)
            .arg("refresh_token");

    _tokenNetworkAccessManager.post(networkRequest, content.toUtf8());
}

void OAuth2Service::userCodeRequestFinished(QNetworkReply* networkReply)
{
    QJsonDocument jsonDocument = QJsonDocument::fromJson(networkReply->readAll());
    QJsonObject rootObject = jsonDocument.object();
    qDebug() << "User code response:";
    qDebug() << jsonDocument.toJson();
    emit userAuthorizationRequired(
                rootObject.value("device_code").toString(),
                rootObject.value("user_code").toString(),
                rootObject.value("verification_url").toString(),
                rootObject.value("expires_in").toInt(),
                rootObject.value("interval").toInt());
    networkReply->deleteLater();
}

void OAuth2Service::tokenRequestFinished(QNetworkReply* networkReply)
{
    QJsonDocument jsonDocument = QJsonDocument::fromJson(networkReply->readAll());
    QJsonObject rootObject = jsonDocument.object();
    qDebug() << "Token response:";
    qDebug() << jsonDocument.toJson();
    if(rootObject.keys().contains("error")) {
        QString error = rootObject.value("error").toString();
        QString errorDescription = rootObject.value("error_description").toString();
        emit tokenRetrieveError(error, errorDescription);
    } else {
        emit accessTokenReceived(
                    rootObject.value("access_token").toString(),
                    rootObject.value("token_type").toString(),
                    rootObject.value("expires_in").toInt(),
                    rootObject.value("refresh_token").toString());
    }
    networkReply->deleteLater();
}

GoogleOAuth2Service::GoogleOAuth2Service(QString clientId,
                                         QString clientSecret,
                                         QString scope,
                                         QObject *parent) :
    OAuth2Service("https://accounts.google.com/o/oauth2/device/code",
                  "https://accounts.google.com/o/oauth2/token",
                  clientId,
                  clientSecret,
                  scope,
                  parent)
{
}

GoogleOAuth2Service::~GoogleOAuth2Service()
{
}
void OAuth2Service::onAuthorizationReply()
{
    QNetworkReply *reply = qobject_cast<QNetworkReply *>(sender());
    QString code;
    if (reply->error() == QNetworkReply::NoError) {
        // Parse the authorization code from the reply URL
        QUrl redirectUrl = reply->attribute(QNetworkRequest::RedirectionTargetAttribute).toUrl();
        QUrlQuery query(redirectUrl);
        code = query.queryItemValue("code");
    }
    reply->deleteLater();

    // Use the authorization code to obtain an access token
    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    QNetworkRequest request;
    request.setUrl(QUrl("https://www.googleapis.com/oauth2/v4/token"));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

    QUrlQuery postdata;
    postdata.addQueryItem("code", code);
    postdata.addQueryItem("client_id", "your_client_id");
    postdata.addQueryItem("client_secret", "your_client_secret");
    postdata.addQueryItem("redirect_uri", "http://localhost:8000");
    postdata.addQueryItem("grant_type", "authorization_code");

    reply = manager->post(request, postdata.toString(QUrl::FullyEncoded).toUtf8());
    connect(reply, SIGNAL(finished()), this, SLOT(onTokenReply()));
}

void OAuth2Service::onTokenReply()
{
    QNetworkReply *reply = qobject_cast<QNetworkReply *>(sender());
    QString accessToken;
    if (reply->error() == QNetworkReply::NoError) {
        // Parse the access token from the reply JSON
        QByteArray json = reply->readAll();
        QJsonDocument doc = QJsonDocument::fromJson(json);
        accessToken = doc.object().value("access_token").toString();
    }
    reply->deleteLater();

    // Use the access token to send authenticated requests to the Gmail API

}
