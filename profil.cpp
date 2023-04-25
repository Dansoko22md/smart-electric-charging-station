#include "profil.h"
#include "ui_profil.h"
#include "mainwindow.h"
Profil::Profil(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Profil)
{
    ui->setupUi(this);
    // Initialiser les champs de texte avec les informations de l'employé


       ui->lineEdit_nom->setText(E.getNom());
}

Profil::~Profil()
{
    delete ui;
}
void Profil::setStatusLabelText(const QString& text)
{
    ui->label_status->setText(text);
}
