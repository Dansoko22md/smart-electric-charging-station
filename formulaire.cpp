#include "formulaire.h"
#include "mainwindow.h"
#include "ui_formulaire.h"
#include"employe.h"
#include <iostream>
#include <QComboBox>
#include <QtGui>
#include <QCompleter>

#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QtCore/QUrlQuery>
#include <QtWidgets/QInputDialog>
#include <QtWidgets/QMessageBox>
#include <QtCore/QRegularExpression>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QUrl>
#include <QtNetworkAuth>
#include "oauth2service.h"

Formulaire::Formulaire(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Formulaire)
{
    ui->setupUi(this);
    ui->lineEdit_AGE->setValidator( new QIntValidator(0, 99999999, this));// INT

    QRegExp nomRegex("^[a-zA-ZéèêëîïôöùûüçÀÁÂÃÄÅÆÈÉÊËÎÏÔÖÙÛÜÇ]+$");//NOM
    QValidator *nomValidator = new QRegExpValidator(nomRegex, this);

    ui->lineEdit_NOM->setValidator(nomValidator);

    ui->lineEdit_PRENOM->setValidator(nomValidator);





     ui->comboBox->addItem("agent");
     ui->comboBox->addItem("Agent de Service");
     ui->comboBox->addItem("Agent de sécurité");
     ui->comboBox->addItem("Agent d'entretien");
     ui->comboBox->addItem("Admin");

//STYLE
     ui->pushButton_hidden_mdp->setStyleSheet("QPushButton#pushButton_hidden_mdp {"
                                              "background-image: url(:/images/img/eye-off.svg);"
                                              "background-repeat: no-repeat;"
                                              "background-position: center;"
                                              "background-color: #f0f0f0;"
                                              "border: none;"
                                              "}");
     ui->lineEdit_mdp_login->setEchoMode(QLineEdit::Password);
//background: #f0f0f0;

        QString style = "QLineEdit {"
                       "    border-style: solid;"
                       "    border-width: 2px;"
                       "    background: #f0f0f0;"
                       "    border-color: #868686;"
                       "}"
                       "QLineEdit:focus {"
                       "    border-color: rgb(1, 141, 127);"
                       "}";
       /* ui->lineEdit_ID->setStyleSheet(style);
        ui->lineEdit_NOM->setStyleSheet(style);
        ui->lineEdit_PRENOM->setStyleSheet(style);
        ui->lineEdit_MAIL->setStyleSheet(style);
        ui->lineEdit_AGE->setStyleSheet(style);
        ui->lineEdit_MDP->setStyleSheet(style);
        ui->lineEdit_MDP_C->setStyleSheet(style);
        ui->lineEdit_ROLE->setStyleSheet(style);
        ui->lineEdit_mdp_login->setStyleSheet(style);
        ui->lineEdit_clef_login->setStyleSheet(style);*/

        int ret = A.connect_arduino();
        switch (ret) {
            case 0:
                qDebug() << "Arduino is available and connected to: " << A.getarduino_port_name();
                break;
            case 1:
                qDebug() << "Arduino is available but not connected to: " << A.getarduino_port_name();
                break;
            case -1:
                qDebug() << "Arduino is not available";
                break;
        }

        QObject::connect(A.getserial(), SIGNAL(readyRead()), this, SLOT(update_label()));
}

Formulaire::~Formulaire()
{
    delete ui;
}

void Formulaire::on_pushButton_login_clicked()
{
    // Récupérer la position actuelle des frames
    QPoint posF1 = ui->frame_f1->pos();
    QPoint posR1 = ui->frame_r1->pos();

    // Créer une animation pour les frames
    QPropertyAnimation *animF1 = new QPropertyAnimation(ui->frame_f1, "pos");
    animF1->setDuration(500); // Durée de l'animation (en ms)
    animF1->setStartValue(QPoint(posF1.x(), posF1.y()));
    animF1->setEndValue(QPoint(posF1.x() - ui->stackedWidget->width(), posF1.y())); // Translation vers la gauche

    QPropertyAnimation *animR1 = new QPropertyAnimation(ui->frame_r1, "pos");
    animR1->setDuration(500); // Durée de l'animation (en ms)
    animR1->setStartValue(QPoint(posR1.x(), posR1.y()));
    animR1->setEndValue(QPoint(posR1.x() + ui->stackedWidget->width(), posR1.y())); // Translation vers la droite

    // Créer un groupe d'animations
    QParallelAnimationGroup *animGroup = new QParallelAnimationGroup(this);
    animGroup->addAnimation(animF1);
    animGroup->addAnimation(animR1);

    // Connecter le signal de fin d'animation à une fonction de slot
    connect(animGroup, &QParallelAnimationGroup::finished, this, [this]() {
        ui->stackedWidget->setCurrentIndex(1); // Changer de page
    });

    // Lancer l'animation
    animGroup->start();
    // Actualiser l'écran pour rendre l'animation plus fluide
        repaint();
        ui->lineEdit_ID->clear();
        ui->lineEdit_NOM->clear();
        ui->lineEdit_PRENOM->clear();
        ui->lineEdit_MAIL->clear();
        ui->lineEdit_AGE->clear();
        ui->comboBox->setCurrentText("");
        ui->lineEdit_MDP->clear();
        ui->lineEdit_MDP_C->clear();
        ui->lineEdit_MESSAGE->clear();

       ui->lineEdit_clef_login->clear();
       ui->lineEdit_mdp_login->clear();
}


void Formulaire::on_pushButton_signup_clicked()
{
    // Récupérer la position actuelle des frames
    QPoint posF1 = ui->frame_f2->pos();
    QPoint posR1 = ui->frame_r2->pos();

    // Créer une animation pour les frames
    QPropertyAnimation *animF1 = new QPropertyAnimation(ui->frame_f2, "pos");
    animF1->setDuration(500); // Durée de l'animation (en ms)
    animF1->setStartValue(QPoint(posF1.x(), posF1.y()));
    animF1->setEndValue(QPoint(posF1.x() - ui->stackedWidget->width(), posF1.y())); // Translation vers la gauche

    QPropertyAnimation *animR1 = new QPropertyAnimation(ui->frame_r2, "pos");
    animR1->setDuration(500); // Durée de l'animation (en ms)
    animR1->setStartValue(QPoint(posR1.x(), posR1.y()));
    animR1->setEndValue(QPoint(posR1.x() + ui->stackedWidget->width(), posR1.y())); // Translation vers la droite

    // Créer un groupe d'animations
    QParallelAnimationGroup *animGroup = new QParallelAnimationGroup(this);
    animGroup->addAnimation(animF1);
    animGroup->addAnimation(animR1);

    // Connecter le signal de fin d'animation à une fonction de slot
    connect(animGroup, &QParallelAnimationGroup::finished, this, [this]() {
        ui->stackedWidget->setCurrentIndex(0); // Changer de page
    });

    // Lancer l'animation
    animGroup->start();
    // Actualiser l'écran pour rendre l'animation plus fluide
        repaint();
        ui->lineEdit_ID->clear();
        ui->lineEdit_NOM->clear();
        ui->lineEdit_PRENOM->clear();
        ui->lineEdit_MAIL->clear();
        ui->lineEdit_AGE->clear();
        ui->comboBox->setCurrentText("");
        ui->lineEdit_MDP->clear();
        ui->lineEdit_MDP_C->clear();
        ui->lineEdit_MESSAGE->clear();

       ui->lineEdit_clef_login->clear();
       ui->lineEdit_mdp_login->clear();
}


//------------------------------------FONCTIONS-------------------------------
void Formulaire::on_pushButton_AJOUTER_clicked()
{
  //QString password = "monmotdepasse";
  //QByteArray hashedPassword = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);
  //Collect
   int cin = ui->lineEdit_ID->text().toInt();
   QString nom = ui->lineEdit_NOM->text();
   QString prenom = ui->lineEdit_PRENOM->text();
   QString mail = ui->lineEdit_MAIL->text();
   int age = ui->lineEdit_AGE->text().toInt();
   QString role = ui->comboBox->currentText();
   QString mdp = ui->lineEdit_MDP->text();
   QString mdpc = ui->lineEdit_MDP_C->text();



    // Vérification que tous les champs sont remplis
    if (cin == 0 || nom.isEmpty() || prenom.isEmpty() || mail.isEmpty() || age == 0 || mdp.isEmpty() || mdpc.isEmpty()) {
        /*QMessageBox::critical(nullptr, QObject::tr("Erreur"),
            QObject::tr("Tous les champs sont obligatoires.\n"
                        "Veuillez remplir tous les champs."), QMessageBox::Cancel);*/
        ui->lineEdit_MESSAGE->setText("Tous les champs sont obligatoires.\n"
                                      "Veuillez remplir tous les champs.");
        return;
    }
    QString input = ui->lineEdit_ID->text();
        QRegularExpression regex("^[0-9]{2,}$");
        QRegularExpressionMatch match = regex.match(input);
        if (!match.hasMatch()) {
            QMessageBox::warning(this, "Erreur de saisie", "L'ID doit être composé d'au moins deux chiffres.");
            ui->lineEdit_ID->clear();
        }


    // Vérification que le nom contient plus de 3 caractères et ne contient pas de chiffres
    if (nom.length() < 3 || nom.contains(QRegExp("[0-9]"))) {
       ui->lineEdit_MESSAGE->setText("Veuillez saisir un nom valide !");
        /*QMessageBox::critical(nullptr, QObject::tr("Erreur"),
            QObject::tr("Veuillez saisir un nom valide !"), QMessageBox::Cancel);*/
        return;
    }
    // Vérification de la validité du mail
    //QRegularExpression Mailregex("\\b[a-z0-9._%+-]+@esprit\\.tn\\b");
 QRegularExpression Mailregex("^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$");
    if (!Mailregex.match(mail).hasMatch()) {
        ui->lineEdit_MESSAGE->setText("Veuillez saisir une adresse mail valide !");
        /*QMessageBox::critical(nullptr, QObject::tr("Erreur"),
            QObject::tr("Veuillez saisir une adresse mail valide !"), QMessageBox::Cancel);*/
        return;
    }
    // Vérification que l'âge est supérieur ou égal à 18 ans
    if (age < 18) {
         ui->lineEdit_MESSAGE->setText("L'âge doit être supérieur ou égal à 18 ans.");
        /*QMessageBox::critical(nullptr, QObject::tr("Erreur"),
            QObject::tr("L'âge doit être supérieur ou égal à 18 ans."), QMessageBox::Cancel);*/
        return;
    }

    // Vérification que les deux mots de passe sont identiques
    if (mdp != mdpc) {
        ui->lineEdit_MESSAGE->setText("Les mots de passe ne sont pas identiques.");
        /*QMessageBox::critical(nullptr, QObject::tr("Erreur"),
            QObject::tr("Les mots de passe ne sont pas identiques."), QMessageBox::Cancel);*/
        return;
    }

    // Vérification que le mot de passe contient au moins 8 caractères, une lettre minuscule, une lettre majuscule, un chiffre et un caractère spécial
    QRegularExpression passwordRegex("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[@$!%*?&])[A-Za-z\\d@$!%*?&]{8,}$");
    if (!passwordRegex.match(mdp).hasMatch()) {
        //ui->lineEdit_MESSAGE->setText("Le mot de passe doit contenir au moins 8 caractères, \n" "une lettre minuscule, une lettre majuscule, \n"   " un chiffre et un caractère spécial.");
        //return;
          ui->lineEdit_MESSAGE->setText("");
        QMessageBox::critical(nullptr, QObject::tr("Erreur"),
          QObject::tr("Le mot de passe doit contenir au moins 8 caractères, une lettre minuscule, une lettre majuscule, un chiffre et un caractère spécial."), QMessageBox::Ok);
    return;
    }

    // Tous les contrôles de saisie sont passés, on peut ajouter l'employé
    QByteArray mdpHex = QByteArray::fromHex(mdp.toUtf8());

    Employe E(cin, nom, prenom, mail, age, role, mdp);
    bool test = E.ajouter();
    if (test) {


         ui->lineEdit_ID->setText("");
         ui->lineEdit_NOM->setText("");
         ui->lineEdit_PRENOM->setText("");
         ui->lineEdit_MAIL->setText("");
         ui->lineEdit_AGE->setText("");
         ui->comboBox->setCurrentText("");
         ui->lineEdit_MDP->setText("");
         ui->lineEdit_MDP_C->setText("");
         ui->lineEdit_MESSAGE->setText("");
        QMessageBox::information(nullptr, QObject::tr("Succès"),
            QObject::tr("L'employé a été ajouté avec succès."), QMessageBox::Ok);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Erreur"),
          QObject::tr("L'employé n'a pas été ajouté !"), QMessageBox::Ok);
    }
}


void Formulaire::on_pushButton_annuler_clicked()
{
    // Vérifier si les champs sont vides
    if (ui->lineEdit_ID->text().isEmpty() && ui->lineEdit_NOM->text().isEmpty() && ui->lineEdit_PRENOM->text().isEmpty()
            && ui->lineEdit_MAIL->text().isEmpty() && ui->lineEdit_AGE->text().isEmpty()
            && ui->lineEdit_MDP->text().isEmpty() && ui->lineEdit_MDP_C->text().isEmpty() && ui->comboBox->currentText()=="agent") {
        QMessageBox::information(this, "Aucune modification", "Aucune modification à annuler.");
    } else {
        QMessageBox::StandardButton confirmation = QMessageBox::question(this, "Confirmation d'annulation", "Êtes-vous sûr(e) de vouloir annuler les modifications ?");

        if (confirmation == QMessageBox::Yes) {
            ui->lineEdit_ID->setText("");
            ui->lineEdit_NOM->setText("");
            ui->lineEdit_PRENOM->setText("");
            ui->lineEdit_MAIL->setText("");
            ui->lineEdit_AGE->setText("");
            ui->comboBox->setCurrentText("agent");
            ui->lineEdit_MDP->setText("");
            ui->lineEdit_MDP_C->setText("");
            ui->lineEdit_MESSAGE->setText("");
        }
    }
}


void Formulaire::on_pushButton_signin_clicked()
{
    QString email = ui->lineEdit_clef_login->text();
    QString mdp = ui->lineEdit_mdp_login->text();

    Employe employe;
    bool connexionReussie = employe.seConnecter(email, mdp);

    if (connexionReussie) {
        // Fermer le formulaire
            this->close();
            employe.setEtatConnexion(1,email);

            MainWindow *mainWindow = new MainWindow();
            mainWindow->show();
    } else {

        QMessageBox::warning(this, "Erreur de connexion", "L'adresse e-mail ou le mot de passe est incorrect.");
    }
}

void Formulaire::on_pushButton_hidden_mdp_clicked()
{
    if(ui->lineEdit_mdp_login->echoMode() == QLineEdit::Normal){
        ui->lineEdit_mdp_login->setEchoMode(QLineEdit::Password);
        ui->pushButton_hidden_mdp->setStyleSheet("QPushButton#pushButton_hidden_mdp {"
                                                 "background-image: url(:/images/img/eye-off.svg);"
                                                 "background-repeat: no-repeat;"
                                                 "background-position: center;"
                                                 "background-color: #f0f0f0;"
                                                 "border: none;"
                                                 "}");
    } else {
        ui->lineEdit_mdp_login->setEchoMode(QLineEdit::Normal);
        ui->pushButton_hidden_mdp->setStyleSheet("QPushButton#pushButton_hidden_mdp {"
                                                 "background-image: url(:/images/img/eye.svg);"
                                                 "background-repeat: no-repeat;"
                                                 "background-position: center;"
                                                 "background-color: #f0f0f0;"
                                                 "border: none;"
                                                 "}");
    }
}



void Formulaire::on_pushButton_forgot_pw_clicked()
{
    // Prompt the user for their email address
    QString emailAddress = QInputDialog::getText(this, tr("Forgot Password"),
                                                  tr("Enter your email address:"));
    if (emailAddress.isEmpty()) {
        // The user cancelled the input dialog
        return;
    }

    // Validate the email address format
    QRegularExpression emailRegex("^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$");
    if (!emailRegex.match(emailAddress).hasMatch()) {
        // The email address format is invalid
        QMessageBox::critical(this, tr("Forgot Password"),
                              tr("Invalid email address format"));
        return;
    }

    // Check if the email address exists
    QSqlQuery query;
    query.prepare("SELECT email FROM employes WHERE email = :email");
    query.bindValue(":email", emailAddress);
    if (!query.exec()) {
        // An error occurred executing the query
        QMessageBox::critical(this, tr("Forgot Password"),
                              tr("Failed to check email address"));
        return;
    }

    if (!query.next()) {
        // The email address does not exist in the database
        QMessageBox::critical(this, tr("Forgot Password"),
                              tr("Email address not found"));
        return;
    }

    // The email address exists in the database, send a password reset email
        QString smtpServer = "smtp.gmail.com";
        QString username = "dansokomoussa42@gmail.com";
        QString password = "669037236Md@";
        QString from = "dansokomoussa42@gmail.com";
        QString to = "dansokofaring@gmail.com";
        QString subject = "Test email";
        QString body = "This is a test email sent from Qt.";

        //sendMaile();

        /*bool success = sendEmail1(smtpServer, username, password, from, to, subject, body);
        if (success) {
            // The email was sent successfully
            QMessageBox::information(this, tr("Forgot Password"),
                                     tr("An email has been sent to your email address with instructions on how to reset your password."));
        } else {
            // Failed to send the email
            QMessageBox::critical(this, tr("Forgot Password"),
                                     tr("not send."));
        }*/
        // Créer l'objet OAuth2 pour Gmail
           QOAuth2AuthorizationCodeFlow oauth2;
           oauth2.setAuthorizationUrl(QUrl("https://accounts.google.com/o/oauth2/auth"));
           oauth2.setAccessTokenUrl(QUrl("https://accounts.google.com/o/oauth2/token"));
           oauth2.setClientIdentifier("241409450326-udli34oaq84qqlhql4rmd3e4p9o8elnp.apps.googleusercontent.com");
           oauth2.setClientIdentifierSharedKey("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");
           oauth2.setScope("https://www.googleapis.com/auth/gmail.compose");
  //4/1AVHEtk6z6YBHqJo9ARByVnzSAuuqFK6idcHw58yTfgRxkrR5q8IkL1VBn4Q
           // Ouvrir la page d'autorisation
           QUrl authUrl = oauth2.authorizationUrl();
           QDesktopServices::openUrl(authUrl);

           // Attendre l'autorisation de l'utilisateur
           qDebug() << "Waiting for authorization...";
           QEventLoop loop;
           QObject::connect(&oauth2, &QOAuth2AuthorizationCodeFlow::authorizeWithBrowser,
                            &QDesktopServices::openUrl);
           QObject::connect(&oauth2, &QOAuth2AuthorizationCodeFlow::granted,
                            &loop, &QEventLoop::quit);
           loop.exec();

           // Récupérer le jeton d'accès
           oauth2.grant();

           // Vérifier si l'accès a été accordé
           if (!oauth2.token().isEmpty()) {
               qDebug() << "Access granted!";


           } else {
               qDebug() << "Access denied!";
           }
           sendMaile();
}

bool Formulaire::sendEmail1(QString smtpServer, QString username, QString password, QString from, QString to, QString subject, QString body)
{
    QString message;
    message.append("From: " + from + "\n");
    message.append("To: " + to + "\n");
    message.append("Subject: " + subject + "\n");
    message.append("MIME-Version: 1.0\n");
    message.append("Content-Type: text/html; charset=UTF-8\n");
    message.append("\n" + body);

    QTcpSocket socket;
    socket.connectToHost(smtpServer, 465);

    if(socket.waitForConnected()) {
        QTextStream stream(&socket);

        if(socket.waitForReadyRead()) {
            QString response = socket.readAll();
            if(!response.contains("220")) {
                qDebug() << "Error in connection response:" << response;
                return false;
            }
        }

        stream << "EHLO localhost\r\n";
        stream.flush();

        if(socket.waitForReadyRead()) {
            QString response = socket.readAll();
            if(!response.contains("250")) {
                qDebug() << "Error in EHLO response:" << response;
                return false;
            }
        }

        stream << "AUTH LOGIN\r\n";
        stream.flush();

        if(socket.waitForReadyRead()) {
            QString response = socket.readAll();
            if(!response.contains("334")) {
                qDebug() << "Error in AUTH LOGIN response:" << response;
                return false;
            }
        }

        stream << username.toLatin1().toBase64() << "\r\n";
        stream.flush();

        if(socket.waitForReadyRead()) {
            QString response = socket.readAll();
            if(!response.contains("334")) {
                qDebug() << "Error in username response:" << response;
                return false;
            }
        }

        stream << password.toLatin1().toBase64() << "\r\n";
        stream.flush();

        if(socket.waitForReadyRead()) {
            QString response = socket.readAll();
            if(!response.contains("235")) {
                qDebug() << "Error in password response:" << response;
                return false;
            }
        }

        stream << "MAIL FROM:<" + from + ">\r\n";
        stream.flush();

        if(socket.waitForReadyRead()) {
            QString response = socket.readAll();
            if(!response.contains("250")) {
                qDebug() << "Error in MAIL FROM response:" << response;
                return false;
            }
        }

        stream << "RCPT TO:<" + to + ">\r\n";
        stream.flush();

        if(socket.waitForReadyRead()) {
            QString response = socket.readAll();
            if(!response.contains("250")) {
                qDebug() << "Error in RCPT TO response:" << response;
                return false;
            }
        }

        stream << "DATA\r\n";
        stream.flush();

        if(socket.waitForReadyRead()) {
            QString response = socket.readAll();
            if(!response.contains("354")) {
                qDebug() << "Error in DATA response:" << response;
                return false;
            }
        }

        stream << message << "\r\n.\r\n";
        stream.flush();

        if(socket.waitForReadyRead()) {
            QString response = socket.readAll();
            if(!response.contains("250")) {
                qDebug() << "Error in message response:" << response;
                return false;
            }
        }

        qDebug() << "Email sent successfully!";
        return true;
    }

    qDebug() << "Connection to SMTP server failed!";
    return false;
}

void Formulaire::sendMaile()
{
    //your email ,your password , smtp server ,port
  smtp = new Smtp("dansokomoussa42@gmail.com" , "1AVHEtk4dYJPzDQiQ5aozEfQSEZPG-EOqsDo-O7WldvG_pdh9NmyT3_LT1aU", "smtp.gmail.com",465);
  connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));
  std::srand(static_cast<unsigned int>(std::time(nullptr)));
  ran=std::rand();
  msg ="Welcome To Launcher Application please copy this number and place it : "+QString::number(ran);
  // qDebug()<<msg;
  //your email
  smtp->sendMail("dansokomoussa42@gmail.com","dansokofaring@gmail.com" , "Launcher Application code : "+QString::number(ran),msg);

}

void Formulaire::mailSent(QString status)
{
  //  if(smtp == nullptr) return;
  if(status == "Message sent"){
      //      disconnect(SIGNAL(status(QString)), this, SLOT(mailSent(QString)));
      //      if(smtp != nullptr){
      //          smtp->deleteLater();
      //          smtp = nullptr;
              }
}




void Formulaire::on_pushButton_scanner_clicked()
{
    A.write_to_arduino("1");
}



void Formulaire::on_pushButton_scanAgent_clicked()
{
    A.write_to_arduino("0");
}
void Formulaire::update_label()
{
    data = A.read_from_arduino();
    if(data=="1")
        ui->label_update->setText("Identifié");
    else  if(data=="0")
         ui->label_update->setText("Non Identifié");
}
