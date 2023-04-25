#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
//#include <QtNetwork>
//#include <QMailMessage>
//#include <QMailAddress>
//#include <QMailTransport>

//
#include <QItemDelegate>
#include <QString>
#include <QApplication>
#include <QSqlError>
#include <QMessageBox>
#include <QCloseEvent>
#include <QLineEdit>
#include <QSqlRecord>
#include <QSqlQueryModel>
#include <QFileDialog>
#include <QFile>
#include <QPushButton>
#include <QItemSelectionModel>
#include <QDebug>
#include <QBuffer>
#include <QSqlQuery>
#include <QRegExp>
#include <cstdlib>
#include <iostream>
#include <map>
#include <QStringListModel>
#include <QList>
#include <QListView>
#include <QTimer>
#include <QRegExp>
#include <QRect>
#include <QVector>

#include "qcustomplot.h"


class Employe
{
  int CINE,age;
  QString nom, prenom, email, mdp,role;
  bool m_estConnecte,session_active;

public:

  //CONSTRUCTEURS
    Employe(){}
    Employe(int,QString,QString,QString,int,QString,QString);

  //GETTERS
    int getCINE(){return  CINE;}
    QString getNom(){ return  nom;}
    QString getPernom(){ return  prenom;}
    QString getMail(){return  email;}
    QString getMdp(){ return mdp;}
    int getAge(){ return  age;}
    QString getRole(){ return  role;}

   //SETTERS
    void setCinE(int id){ this->CINE = id;}
    void setNom(QString n){ nom = n;}
    void setPrenom(QString p){ prenom = p;}
    void setMail(QString m){ email = m;}
    void setMdp(QString pass){ mdp = pass;}
    void setAge(int a){ this->age=a;}
    void setRole(bool r){ role=r;}

   //FONCTIONALITES
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    bool modifier();

    QSqlQueryModel * rechercher(QString);
    bool rechercherEmploye(int);
    QSqlQueryModel* Trier(QString);

    QStringList getListeCles() const {
           QStringList liste;
           QSqlQuery query;
           query.prepare("SELECT nom FROM employes");
           if (query.exec()) {
               while (query.next()) {
                   QString nom = query.value(0).toString();
                   liste << nom;
               }
           }
           return liste;
       }
    bool seConnecter(QString, QString);
    bool estConnecte() const{return m_estConnecte;}
    void setEstConnecte(bool estConnecte);
    void setEtatConnexion(int,QString);
   int getEtatConnexion(int);

    void deconnecter();
    void sendEmail();
  QVector <QString> getListNom();
  QVector <QString> getList();
  int getNombreEmployes();
   int getNombreEmploye(QString);
  int getNombreEmployeRetraite(QString,int,int);
  int getNombreEmployeParRole(QString,QString);
     /*virtual QString getTableName() = 0;*/
 // std::pair<bool, QString> seConnecter(const QString &email, const QString &mdp);

};

#endif // EMPLOYE_H
