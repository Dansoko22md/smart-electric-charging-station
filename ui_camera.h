/********************************************************************************
** Form generated from reading UI file 'camera.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_H
#define UI_CAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Camera
{
public:
    QPushButton *optionPushButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QDialog *Camera)
    {
        if (Camera->objectName().isEmpty())
            Camera->setObjectName(QStringLiteral("Camera"));
        Camera->resize(579, 412);
        Camera->setStyleSheet(QLatin1String("front-size:16px;\n"
"border:2px solid rgb(14,189,175);\n"
"border-radius:10px;\n"
"background-color:rgb(86,86,86);\n"
"color:#fff;"));
        optionPushButton = new QPushButton(Camera);
        optionPushButton->setObjectName(QStringLiteral("optionPushButton"));
        optionPushButton->setGeometry(QRect(30, 10, 521, 51));
        optionPushButton->setStyleSheet(QLatin1String("front-size:16px;\n"
"border:2px solid rgb(14,189,175);\n"
"border-radius:10px;\n"
"background-color:rgb(20,196,96);\n"
"color:#fff;"));
        scrollArea = new QScrollArea(Camera);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(30, 70, 521, 311));
        scrollArea->setStyleSheet(QLatin1String("border: 2px solid rgb(14,189,175);\n"
"text-align: center;\n"
"border-radius:10px;\n"
"font-size:16px;\n"
"background:#000;"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 517, 307));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(Camera);

        QMetaObject::connectSlotsByName(Camera);
    } // setupUi

    void retranslateUi(QDialog *Camera)
    {
        Camera->setWindowTitle(QApplication::translate("Camera", "Dialog", Q_NULLPTR));
        optionPushButton->setText(QApplication::translate("Camera", "options", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Camera: public Ui_Camera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_H
