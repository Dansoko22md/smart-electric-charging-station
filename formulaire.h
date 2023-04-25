#ifndef FORMULAIRE_H
#define FORMULAIRE_H
#include "arduino.h"
#include <QMainWindow>
#include <QParallelAnimationGroup>

#include "smtp.h"

namespace Ui {
class Formulaire;
}

class Formulaire : public QMainWindow
{
    Q_OBJECT

public:
    explicit Formulaire(QWidget *parent = nullptr);
    ~Formulaire();
    void sendMaile();
signals:
    void employeIdentifie(); // déclaration du signal personnalisé

private slots:
    void on_pushButton_login_clicked();

    void on_pushButton_signup_clicked();

    void on_pushButton_AJOUTER_clicked();

    void on_pushButton_annuler_clicked();

    void on_pushButton_signin_clicked();

    void on_pushButton_hidden_mdp_clicked();


    void on_pushButton_forgot_pw_clicked();


    bool sendEmail1(QString smtpServer, QString username, QString password, QString from, QString to, QString subject, QString body);
    void mailSent(QString);
    void on_pushButton_scanner_clicked();

    void on_pushButton_clicked();

    void on_pushButton_scanAgent_clicked();
    void update_label();
private:
    Ui::Formulaire *ui;
    bool animEnCours;
    QParallelAnimationGroup *animGroup;
    unsigned int ran;
   Smtp* smtp ;
    QString msg;
    //ActivatonCodeClass *act;

    QByteArray data;
    Arduino A;
};

#endif // FORMULAIRE_H
