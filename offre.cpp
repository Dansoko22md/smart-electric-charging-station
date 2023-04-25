#include "offre.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>

offre::offre()
{
code=0 ;prix=0 ;type=" ";cin_e=0;photos=" ";
}
offre::offre(int code,int prix,QString type,int cin_e,QString photos)
{
    this->code=code;
    this->prix=prix;
    this->type=type;
    this->cin_e=cin_e;
    this->photos=photos;
}
int offre::getcode()
{return code;}
int offre::getprix()
{return prix;}
QString offre::gettype()
{return type;}
int offre::getcin_e()
{return cin_e;}
QString offre::getphotos()
{return photos;}
void offre::setcode(int code)
{this->code=code;}
void offre::setprix(int prix)
{this->prix=prix;}
void offre::settype(QString type)
{this->type=type;}
void offre::setcin_e(int cin_e)
{this->cin_e=cin_e;}
void offre::setphotos(QString photos)
{this->photos=photos;}



bool offre::ajouter()
{


    QSqlQuery query;
    QString code_string= QString::number(code);
    QString prix_string= QString::number(prix);
    QString cin_e_string= QString::number(cin_e);
    QString photos_string= QString(photos);
          query.prepare("INSERT INTO services (code,type, prix , cine ,photos) "
                        "VALUES (:code,:type , :prix,  :cin_e ,:photos)");
          query.bindValue(":code", code_string);//permet de lier une valeur à un paramètre dans une requête SQL préparée.
          query.bindValue(":prix", prix_string);
          query.bindValue(":type", type);
          query.bindValue(":cin_e", cin_e_string);
          query.bindValue(":photos", photos_string);
            return query.exec();

}
bool offre::supprimer(int code)
{
    QSqlQuery query;

    query.prepare("Delete from services where code=:code");
    query.bindValue(":code", code);
      return query.exec();

}
QSqlQueryModel* offre::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();
        model->setQuery("SELECT code,type,prix,cine FROM services");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("Code"));//le texte à afficher pour chaque colonne en fonction de son indice.
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Type"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prix"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("cin_e"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("photos"));
    return model;

}

    bool offre::modifier(int code)
      {
          QSqlQuery query;
          //int res= int(code);

          query.prepare("UPDATE services SET code=:code, type=:type, prix=:prix ,photos=:photos WHERE code=:code");
          query.bindValue(":code", code);
          query.bindValue(":prix", prix);
          query.bindValue(":type", type);
          query.bindValue(":cin_e", cin_e);
          query.bindValue(":photos", photos);


          return    query.exec();
}

 QSqlQueryModel * offre::tricode(){


  QSqlQueryModel *model = new QSqlQueryModel();


        model->setQuery("select * FROM services order by code");
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("prix"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("cine"));
        return  model;
 }
 QSqlQueryModel * offre::triprix(){


  QSqlQueryModel *model = new QSqlQueryModel();

        model->setQuery("select code,prix,type,cine FROM services order by prix ASC");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("code"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("prix"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("cine"));
        return  model;
 }
QSqlQueryModel * offre::tritype()
{
    QSqlQueryModel *model = new QSqlQueryModel();

          model->setQuery("select code,prix,type,cine FROM services order by type");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("code"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("prix"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("cine"));
          return  model;
}
bool offre::chercher_code()
{

    QSqlQuery query;

            QSqlQueryModel* model=new QSqlQueryModel();

               query.prepare("select code,prix,type,cine from services where codee=code " );
               model->setHeaderData(0, Qt::Horizontal, QObject::tr("code"));
               model->setHeaderData(1, Qt::Horizontal, QObject::tr("prix"));
              model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
              model->setHeaderData(3, Qt::Horizontal, QObject::tr("cine"));

                  return model;

}
bool offre::chercher_prix()
{
    QSqlQuery query;

            QSqlQueryModel* model=new QSqlQueryModel();

               query.prepare("select code,prix,type,cine from services where prixx=prix " );
               model->setHeaderData(0, Qt::Horizontal, QObject::tr("code"));
               model->setHeaderData(1, Qt::Horizontal, QObject::tr("prix"));
              model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
              model->setHeaderData(3, Qt::Horizontal, QObject::tr("cine"));

                  return model;
}
bool offre::chercher_type()
{
    QSqlQuery query;

            QSqlQueryModel* model=new QSqlQueryModel();

               query.prepare("select code,prix,type,cine from services where typee=type " );
               model->setHeaderData(0, Qt::Horizontal, QObject::tr("code"));
               model->setHeaderData(1, Qt::Horizontal, QObject::tr("prix"));
              model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
              model->setHeaderData(3, Qt::Horizontal, QObject::tr("cine"));

                  return model;
}
