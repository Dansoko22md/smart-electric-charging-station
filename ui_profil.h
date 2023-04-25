/********************************************************************************
** Form generated from reading UI file 'profil.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFIL_H
#define UI_PROFIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Profil
{
public:
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_Mail;
    QLineEdit *lineEdit_Mdp;
    QLabel *label_status;

    void setupUi(QDialog *Profil)
    {
        if (Profil->objectName().isEmpty())
            Profil->setObjectName(QStringLiteral("Profil"));
        Profil->resize(419, 427);
        lineEdit_nom = new QLineEdit(Profil);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(40, 70, 271, 31));
        lineEdit_Mail = new QLineEdit(Profil);
        lineEdit_Mail->setObjectName(QStringLiteral("lineEdit_Mail"));
        lineEdit_Mail->setGeometry(QRect(40, 190, 271, 31));
        lineEdit_Mdp = new QLineEdit(Profil);
        lineEdit_Mdp->setObjectName(QStringLiteral("lineEdit_Mdp"));
        lineEdit_Mdp->setGeometry(QRect(40, 321, 281, 31));
        label_status = new QLabel(Profil);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(110, 20, 131, 31));

        retranslateUi(Profil);

        QMetaObject::connectSlotsByName(Profil);
    } // setupUi

    void retranslateUi(QDialog *Profil)
    {
        Profil->setWindowTitle(QApplication::translate("Profil", "Dialog", Q_NULLPTR));
        label_status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Profil: public Ui_Profil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFIL_H
