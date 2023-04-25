/********************************************************************************
** Form generated from reading UI file 'serviceagentwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVICEAGENTWINDOW_H
#define UI_SERVICEAGENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServiceAgentWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ServiceAgentWindow)
    {
        if (ServiceAgentWindow->objectName().isEmpty())
            ServiceAgentWindow->setObjectName(QStringLiteral("ServiceAgentWindow"));
        ServiceAgentWindow->resize(1267, 690);
        centralwidget = new QWidget(ServiceAgentWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        ServiceAgentWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ServiceAgentWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1267, 26));
        ServiceAgentWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ServiceAgentWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ServiceAgentWindow->setStatusBar(statusbar);

        retranslateUi(ServiceAgentWindow);

        QMetaObject::connectSlotsByName(ServiceAgentWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ServiceAgentWindow)
    {
        ServiceAgentWindow->setWindowTitle(QApplication::translate("ServiceAgentWindow", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ServiceAgentWindow: public Ui_ServiceAgentWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVICEAGENTWINDOW_H
