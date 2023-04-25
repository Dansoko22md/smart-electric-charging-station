/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_5;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QPushButton *pushButton_login;
    QLabel *label_2;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_6;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QFrame *frame_form;
    QGridLayout *gridLayout_4;
    QFrame *frame_30;
    QLineEdit *lineEdit_MDP;
    QLabel *label_20;
    QFrame *frame_18;
    QLineEdit *lineEdit_ROLE;
    QLabel *label_24;
    QComboBox *comboBox;
    QFrame *frame_10;
    QLineEdit *lineEdit_ID;
    QLabel *label_4;
    QFrame *frame_16;
    QLineEdit *lineEdit_MAIL;
    QLabel *label_5;
    QFrame *frame_32;
    QLineEdit *lineEdit_PRENOM;
    QLabel *label_6;
    QFrame *frame_31;
    QLineEdit *lineEdit_MDP_C;
    QLabel *label_25;
    QFrame *frame_29;
    QLineEdit *lineEdit_NOM;
    QLabel *label_11;
    QFrame *frame_17;
    QLineEdit *lineEdit_AGE;
    QLabel *label_7;
    QFrame *frame_9;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_annuler;
    QPushButton *pushButton_AJOUTER;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_18;
    QLineEdit *lineEdit_MESSAGE;
    QWidget *page_4;
    QHBoxLayout *horizontalLayout_8;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_9;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_14;
    QFrame *frame_19;
    QVBoxLayout *verticalLayout_15;
    QFrame *frame_20;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_15;
    QFrame *frame_21;
    QVBoxLayout *verticalLayout_16;
    QFrame *frame_22;
    QLineEdit *lineEdit_clef_login;
    QLabel *label_16;
    QFrame *frame_24;
    QLineEdit *lineEdit_mdp_login;
    QLabel *label_18;
    QFrame *frame_26;
    QVBoxLayout *verticalLayout_39;
    QPushButton *pushButton_signin;
    QFrame *frame_62;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_113;
    QFrame *frame_23;
    QVBoxLayout *verticalLayout_17;
    QFrame *frame_25;
    QHBoxLayout *horizontalLayout_12;
    QFrame *frame_27;
    QVBoxLayout *verticalLayout_18;
    QFrame *frame_28;
    QGridLayout *gridLayout_8;
    QLabel *label_13;
    QPushButton *pushButton_signup;
    QLabel *label_14;
    QLabel *label_12;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1233, 638);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        horizontalLayout_3 = new QHBoxLayout(page_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        widget_3 = new QWidget(page_3);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_4 = new QHBoxLayout(widget_3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        frame_2 = new QFrame(widget_3);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setStyleSheet(QLatin1String("   background:rgb(1, 141, 127);\n"
"border: none;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_2);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(100, 300));
        label->setMaximumSize(QSize(550, 1000));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/img/login.png")));
        label->setScaledContents(true);

        horizontalLayout_5->addWidget(label);

        frame_6 = new QFrame(frame_2);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        frame_5 = new QFrame(frame_6);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setStyleSheet(QStringLiteral("text-align: center;"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_5);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_3 = new QLabel(frame_5);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        pushButton_login = new QPushButton(frame_5);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setMinimumSize(QSize(200, 50));
        pushButton_login->setMaximumSize(QSize(300, 80));
        QFont font;
        font.setFamily(QStringLiteral("cambria"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        pushButton_login->setFont(font);
        pushButton_login->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_login->setStyleSheet(QLatin1String(" width: 150px;\n"
"    height: 50px;\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    background: rgb(8, 103, 94);\n"
"    color: #fff;\n"
"    font-weight: 600;\n"
"    margin: 10px 0;\n"
"    text-transform: uppercase;\n"
"    cursor: pointer;\n"
"padding: 5px;"));

        gridLayout_3->addWidget(pushButton_login, 1, 0, 1, 1);

        label_2 = new QLabel(frame_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setFamily(QStringLiteral("cambria"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color:#fff;"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);


        verticalLayout_4->addWidget(frame_5);


        horizontalLayout_5->addWidget(frame_6);


        horizontalLayout_4->addWidget(frame_2);

        frame_3 = new QFrame(widget_3);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setStyleSheet(QLatin1String("background:#fff;\n"
"\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_3);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        frame_7 = new QFrame(frame_3);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_7);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_8 = new QLabel(frame_7);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font2;
        font2.setFamily(QStringLiteral("cambria"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        label_8->setFont(font2);
        label_8->setStyleSheet(QStringLiteral("color:rgb(1, 141, 127);"));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_8);


        verticalLayout_6->addWidget(frame_7);

        frame_form = new QFrame(frame_3);
        frame_form->setObjectName(QStringLiteral("frame_form"));
        frame_form->setStyleSheet(QStringLiteral("color: #868686;"));
        frame_form->setFrameShape(QFrame::StyledPanel);
        frame_form->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_form);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        frame_30 = new QFrame(frame_form);
        frame_30->setObjectName(QStringLiteral("frame_30"));
        frame_30->setMinimumSize(QSize(0, 50));
        frame_30->setMaximumSize(QSize(16777215, 100));
        frame_30->setStyleSheet(QLatin1String("border: 1px solid #000;\n"
"border-radius: 10px;"));
        frame_30->setFrameShape(QFrame::StyledPanel);
        frame_30->setFrameShadow(QFrame::Raised);
        lineEdit_MDP = new QLineEdit(frame_30);
        lineEdit_MDP->setObjectName(QStringLiteral("lineEdit_MDP"));
        lineEdit_MDP->setGeometry(QRect(30, 10, 200, 30));
        lineEdit_MDP->setMinimumSize(QSize(200, 30));
        lineEdit_MDP->setMaximumSize(QSize(200, 30));
        QFont font3;
        font3.setFamily(QStringLiteral("cambria"));
        font3.setPointSize(13);
        lineEdit_MDP->setFont(font3);
        lineEdit_MDP->setStyleSheet(QStringLiteral("border:none;"));
        lineEdit_MDP->setEchoMode(QLineEdit::Password);
        lineEdit_MDP->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(frame_30);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(30, 10, 25, 30));
        label_20->setMinimumSize(QSize(25, 30));
        label_20->setMaximumSize(QSize(20, 30));
        label_20->setStyleSheet(QStringLiteral("border: none"));
        label_20->setPixmap(QPixmap(QString::fromUtf8(":/images/img/lock.svg")));
        label_20->setScaledContents(true);
        label_20->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(frame_30, 3, 0, 1, 1);

        frame_18 = new QFrame(frame_form);
        frame_18->setObjectName(QStringLiteral("frame_18"));
        frame_18->setMinimumSize(QSize(0, 50));
        frame_18->setMaximumSize(QSize(16777215, 100));
        frame_18->setStyleSheet(QLatin1String("border: 1px solid #000;\n"
"border-radius: 10px;"));
        frame_18->setFrameShape(QFrame::StyledPanel);
        frame_18->setFrameShadow(QFrame::Raised);
        lineEdit_ROLE = new QLineEdit(frame_18);
        lineEdit_ROLE->setObjectName(QStringLiteral("lineEdit_ROLE"));
        lineEdit_ROLE->setGeometry(QRect(30, 10, 200, 30));
        lineEdit_ROLE->setMinimumSize(QSize(200, 30));
        lineEdit_ROLE->setMaximumSize(QSize(200, 30));
        lineEdit_ROLE->setFont(font3);
        lineEdit_ROLE->setStyleSheet(QStringLiteral("border:none;"));
        lineEdit_ROLE->setEchoMode(QLineEdit::Normal);
        lineEdit_ROLE->setAlignment(Qt::AlignCenter);
        label_24 = new QLabel(frame_18);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(30, 10, 25, 30));
        label_24->setMinimumSize(QSize(25, 30));
        label_24->setMaximumSize(QSize(20, 30));
        label_24->setStyleSheet(QStringLiteral("border: none"));
        label_24->setPixmap(QPixmap(QString::fromUtf8(":/images/img/briefcase.svg")));
        label_24->setScaledContents(true);
        label_24->setAlignment(Qt::AlignCenter);
        comboBox = new QComboBox(frame_18);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(70, 10, 181, 31));
        QFont font4;
        font4.setFamily(QStringLiteral("cambria"));
        font4.setPointSize(12);
        comboBox->setFont(font4);
        comboBox->setStyleSheet(QStringLiteral("border: none"));

        gridLayout_4->addWidget(frame_18, 2, 1, 1, 1);

        frame_10 = new QFrame(frame_form);
        frame_10->setObjectName(QStringLiteral("frame_10"));
        frame_10->setMinimumSize(QSize(0, 50));
        frame_10->setMaximumSize(QSize(16777215, 100));
        frame_10->setStyleSheet(QLatin1String("border: 1px solid #000;\n"
"border-radius: 10px;\n"
""));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        lineEdit_ID = new QLineEdit(frame_10);
        lineEdit_ID->setObjectName(QStringLiteral("lineEdit_ID"));
        lineEdit_ID->setGeometry(QRect(30, 10, 200, 30));
        lineEdit_ID->setMinimumSize(QSize(200, 30));
        lineEdit_ID->setMaximumSize(QSize(200, 30));
        lineEdit_ID->setFont(font3);
        lineEdit_ID->setStyleSheet(QStringLiteral("border:none;"));
        lineEdit_ID->setEchoMode(QLineEdit::Normal);
        lineEdit_ID->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(frame_10);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 10, 25, 30));
        label_4->setMinimumSize(QSize(25, 30));
        label_4->setMaximumSize(QSize(20, 30));
        label_4->setStyleSheet(QStringLiteral("border: none"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/img/tag.svg")));
        label_4->setScaledContents(true);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(frame_10, 0, 0, 1, 1);

        frame_16 = new QFrame(frame_form);
        frame_16->setObjectName(QStringLiteral("frame_16"));
        frame_16->setMinimumSize(QSize(0, 50));
        frame_16->setMaximumSize(QSize(16777215, 100));
        frame_16->setStyleSheet(QLatin1String("border: 1px solid #000;\n"
"border-radius: 10px;"));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        lineEdit_MAIL = new QLineEdit(frame_16);
        lineEdit_MAIL->setObjectName(QStringLiteral("lineEdit_MAIL"));
        lineEdit_MAIL->setGeometry(QRect(30, 10, 200, 30));
        lineEdit_MAIL->setMinimumSize(QSize(200, 30));
        lineEdit_MAIL->setMaximumSize(QSize(200, 30));
        lineEdit_MAIL->setFont(font3);
        lineEdit_MAIL->setStyleSheet(QStringLiteral("border:none;"));
        lineEdit_MAIL->setEchoMode(QLineEdit::Normal);
        lineEdit_MAIL->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(frame_16);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 10, 25, 30));
        label_5->setMinimumSize(QSize(25, 30));
        label_5->setMaximumSize(QSize(20, 30));
        label_5->setStyleSheet(QStringLiteral("border: none"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/images/img/mail.svg")));
        label_5->setScaledContents(true);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(frame_16, 1, 0, 1, 1);

        frame_32 = new QFrame(frame_form);
        frame_32->setObjectName(QStringLiteral("frame_32"));
        frame_32->setMinimumSize(QSize(0, 50));
        frame_32->setMaximumSize(QSize(16777215, 100));
        frame_32->setStyleSheet(QLatin1String("border: 1px solid #000;\n"
"border-radius: 10px;"));
        frame_32->setFrameShape(QFrame::StyledPanel);
        frame_32->setFrameShadow(QFrame::Raised);
        lineEdit_PRENOM = new QLineEdit(frame_32);
        lineEdit_PRENOM->setObjectName(QStringLiteral("lineEdit_PRENOM"));
        lineEdit_PRENOM->setGeometry(QRect(30, 10, 200, 30));
        lineEdit_PRENOM->setMinimumSize(QSize(200, 30));
        lineEdit_PRENOM->setMaximumSize(QSize(200, 30));
        lineEdit_PRENOM->setFont(font3);
        lineEdit_PRENOM->setStyleSheet(QStringLiteral("border:none;"));
        lineEdit_PRENOM->setEchoMode(QLineEdit::Normal);
        lineEdit_PRENOM->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(frame_32);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 10, 25, 30));
        label_6->setMinimumSize(QSize(25, 30));
        label_6->setMaximumSize(QSize(20, 30));
        label_6->setStyleSheet(QStringLiteral("border: none"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/images/img/user.svg")));
        label_6->setScaledContents(true);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(frame_32, 1, 1, 1, 1);

        frame_31 = new QFrame(frame_form);
        frame_31->setObjectName(QStringLiteral("frame_31"));
        frame_31->setMinimumSize(QSize(0, 50));
        frame_31->setMaximumSize(QSize(16777215, 100));
        frame_31->setStyleSheet(QLatin1String("border: 1px solid #000;\n"
"border-radius: 10px;"));
        frame_31->setFrameShape(QFrame::StyledPanel);
        frame_31->setFrameShadow(QFrame::Raised);
        lineEdit_MDP_C = new QLineEdit(frame_31);
        lineEdit_MDP_C->setObjectName(QStringLiteral("lineEdit_MDP_C"));
        lineEdit_MDP_C->setGeometry(QRect(30, 10, 200, 30));
        lineEdit_MDP_C->setMinimumSize(QSize(200, 30));
        lineEdit_MDP_C->setMaximumSize(QSize(200, 30));
        lineEdit_MDP_C->setFont(font3);
        lineEdit_MDP_C->setStyleSheet(QStringLiteral("border:none;"));
        lineEdit_MDP_C->setEchoMode(QLineEdit::Password);
        lineEdit_MDP_C->setAlignment(Qt::AlignCenter);
        label_25 = new QLabel(frame_31);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(30, 10, 25, 30));
        label_25->setMinimumSize(QSize(25, 30));
        label_25->setMaximumSize(QSize(20, 30));
        label_25->setStyleSheet(QStringLiteral("border: none"));
        label_25->setPixmap(QPixmap(QString::fromUtf8(":/images/img/lock.svg")));
        label_25->setScaledContents(true);
        label_25->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(frame_31, 3, 1, 1, 1);

        frame_29 = new QFrame(frame_form);
        frame_29->setObjectName(QStringLiteral("frame_29"));
        frame_29->setMinimumSize(QSize(0, 50));
        frame_29->setMaximumSize(QSize(16777215, 100));
        frame_29->setStyleSheet(QLatin1String("border: 1px solid #000;\n"
"border-radius: 10px;\n"
""));
        frame_29->setFrameShape(QFrame::StyledPanel);
        frame_29->setFrameShadow(QFrame::Raised);
        lineEdit_NOM = new QLineEdit(frame_29);
        lineEdit_NOM->setObjectName(QStringLiteral("lineEdit_NOM"));
        lineEdit_NOM->setGeometry(QRect(30, 10, 200, 30));
        lineEdit_NOM->setMinimumSize(QSize(200, 30));
        lineEdit_NOM->setMaximumSize(QSize(200, 30));
        lineEdit_NOM->setFont(font3);
        lineEdit_NOM->setStyleSheet(QStringLiteral("border:none;"));
        lineEdit_NOM->setEchoMode(QLineEdit::Normal);
        lineEdit_NOM->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(frame_29);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 10, 25, 30));
        label_11->setMinimumSize(QSize(25, 30));
        label_11->setMaximumSize(QSize(20, 30));
        label_11->setStyleSheet(QStringLiteral("border: none"));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/images/img/user-check.svg")));
        label_11->setScaledContents(true);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(frame_29, 0, 1, 1, 1);

        frame_17 = new QFrame(frame_form);
        frame_17->setObjectName(QStringLiteral("frame_17"));
        frame_17->setMinimumSize(QSize(0, 50));
        frame_17->setMaximumSize(QSize(16777215, 100));
        frame_17->setStyleSheet(QLatin1String("border: 1px solid #000;\n"
"border-radius: 10px;"));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        lineEdit_AGE = new QLineEdit(frame_17);
        lineEdit_AGE->setObjectName(QStringLiteral("lineEdit_AGE"));
        lineEdit_AGE->setGeometry(QRect(30, 10, 200, 30));
        lineEdit_AGE->setMinimumSize(QSize(200, 30));
        lineEdit_AGE->setMaximumSize(QSize(200, 30));
        lineEdit_AGE->setFont(font3);
        lineEdit_AGE->setStyleSheet(QStringLiteral("border:none;"));
        lineEdit_AGE->setEchoMode(QLineEdit::Normal);
        lineEdit_AGE->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(frame_17);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 10, 25, 30));
        label_7->setMinimumSize(QSize(25, 30));
        label_7->setMaximumSize(QSize(20, 30));
        label_7->setStyleSheet(QStringLiteral("border: none"));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/images/img/check-circle.svg")));
        label_7->setScaledContents(true);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(frame_17, 2, 0, 1, 1);


        verticalLayout_6->addWidget(frame_form);

        frame_9 = new QFrame(frame_3);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        frame_9->setStyleSheet(QStringLiteral("background:rgb(1, 141, 127);"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_9);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        pushButton_annuler = new QPushButton(frame_9);
        pushButton_annuler->setObjectName(QStringLiteral("pushButton_annuler"));
        QFont font5;
        font5.setFamily(QStringLiteral("cambria"));
        font5.setPointSize(16);
        font5.setBold(true);
        font5.setWeight(75);
        pushButton_annuler->setFont(font5);
        pushButton_annuler->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_annuler->setStyleSheet(QLatin1String("color: #fff;\n"
"border-radius: 10px;"));

        horizontalLayout_7->addWidget(pushButton_annuler, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_AJOUTER = new QPushButton(frame_9);
        pushButton_AJOUTER->setObjectName(QStringLiteral("pushButton_AJOUTER"));
        pushButton_AJOUTER->setFont(font);
        pushButton_AJOUTER->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_AJOUTER->setStyleSheet(QLatin1String("padding: 10px;\n"
"color:rgb(1, 141, 127);\n"
"background: #fff;"));

        horizontalLayout_7->addWidget(pushButton_AJOUTER, 0, Qt::AlignHCenter);


        verticalLayout_6->addWidget(frame_9);

        frame_8 = new QFrame(frame_3);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        horizontalLayout_18 = new QHBoxLayout(frame_8);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        lineEdit_MESSAGE = new QLineEdit(frame_8);
        lineEdit_MESSAGE->setObjectName(QStringLiteral("lineEdit_MESSAGE"));
        lineEdit_MESSAGE->setMinimumSize(QSize(0, 60));
        QFont font6;
        font6.setFamily(QStringLiteral("cambria"));
        font6.setPointSize(10);
        lineEdit_MESSAGE->setFont(font6);
        lineEdit_MESSAGE->setStyleSheet(QLatin1String("color: red;\n"
"border: none;"));
        lineEdit_MESSAGE->setAlignment(Qt::AlignCenter);
        lineEdit_MESSAGE->setReadOnly(true);

        horizontalLayout_18->addWidget(lineEdit_MESSAGE);


        verticalLayout_6->addWidget(frame_8);


        horizontalLayout_4->addWidget(frame_3);


        horizontalLayout_3->addWidget(widget_3);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        horizontalLayout_8 = new QHBoxLayout(page_4);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        widget_4 = new QWidget(page_4);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_9 = new QHBoxLayout(widget_4);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        frame_4 = new QFrame(widget_4);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setStyleSheet(QStringLiteral("   background:#fff;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_14 = new QVBoxLayout(frame_4);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        frame_19 = new QFrame(frame_4);
        frame_19->setObjectName(QStringLiteral("frame_19"));
        frame_19->setStyleSheet(QStringLiteral("   background:#fff;"));
        frame_19->setFrameShape(QFrame::StyledPanel);
        frame_19->setFrameShadow(QFrame::Raised);
        verticalLayout_15 = new QVBoxLayout(frame_19);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        frame_20 = new QFrame(frame_19);
        frame_20->setObjectName(QStringLiteral("frame_20"));
        frame_20->setFrameShape(QFrame::StyledPanel);
        frame_20->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(frame_20);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_15 = new QLabel(frame_20);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font2);
        label_15->setStyleSheet(QStringLiteral("color:rgb(1, 141, 127);"));
        label_15->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_15);


        verticalLayout_15->addWidget(frame_20);

        frame_21 = new QFrame(frame_19);
        frame_21->setObjectName(QStringLiteral("frame_21"));
        frame_21->setFrameShape(QFrame::StyledPanel);
        frame_21->setFrameShadow(QFrame::Raised);
        verticalLayout_16 = new QVBoxLayout(frame_21);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        frame_22 = new QFrame(frame_21);
        frame_22->setObjectName(QStringLiteral("frame_22"));
        frame_22->setMinimumSize(QSize(0, 50));
        frame_22->setMaximumSize(QSize(16777215, 100));
        frame_22->setStyleSheet(QLatin1String("border: 1px solid #000;\n"
"border-radius: 10px;"));
        frame_22->setFrameShape(QFrame::StyledPanel);
        frame_22->setFrameShadow(QFrame::Raised);
        lineEdit_clef_login = new QLineEdit(frame_22);
        lineEdit_clef_login->setObjectName(QStringLiteral("lineEdit_clef_login"));
        lineEdit_clef_login->setGeometry(QRect(20, 10, 400, 30));
        lineEdit_clef_login->setMinimumSize(QSize(400, 30));
        lineEdit_clef_login->setMaximumSize(QSize(400, 30));
        lineEdit_clef_login->setFont(font3);
        lineEdit_clef_login->setStyleSheet(QLatin1String("border:none;\n"
"color: #868686;"));
        lineEdit_clef_login->setEchoMode(QLineEdit::Normal);
        lineEdit_clef_login->setAlignment(Qt::AlignCenter);
        label_16 = new QLabel(frame_22);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(30, 10, 25, 30));
        label_16->setMinimumSize(QSize(25, 30));
        label_16->setMaximumSize(QSize(20, 30));
        label_16->setStyleSheet(QStringLiteral("border: none"));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/images/img/user.svg")));
        label_16->setScaledContents(true);
        label_16->setAlignment(Qt::AlignCenter);

        verticalLayout_16->addWidget(frame_22);

        frame_24 = new QFrame(frame_21);
        frame_24->setObjectName(QStringLiteral("frame_24"));
        frame_24->setMinimumSize(QSize(0, 50));
        frame_24->setMaximumSize(QSize(16777215, 100));
        frame_24->setStyleSheet(QLatin1String("border: 1px solid #000;\n"
"border-radius: 10px;"));
        frame_24->setFrameShape(QFrame::StyledPanel);
        frame_24->setFrameShadow(QFrame::Raised);
        lineEdit_mdp_login = new QLineEdit(frame_24);
        lineEdit_mdp_login->setObjectName(QStringLiteral("lineEdit_mdp_login"));
        lineEdit_mdp_login->setGeometry(QRect(20, 10, 400, 30));
        lineEdit_mdp_login->setMinimumSize(QSize(400, 30));
        lineEdit_mdp_login->setMaximumSize(QSize(400, 30));
        lineEdit_mdp_login->setFont(font3);
        lineEdit_mdp_login->setStyleSheet(QLatin1String("border:none;\n"
"color: #868686;"));
        lineEdit_mdp_login->setEchoMode(QLineEdit::Password);
        lineEdit_mdp_login->setAlignment(Qt::AlignCenter);
        label_18 = new QLabel(frame_24);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(30, 10, 25, 30));
        label_18->setMinimumSize(QSize(25, 30));
        label_18->setMaximumSize(QSize(20, 30));
        label_18->setStyleSheet(QStringLiteral("border: none"));
        label_18->setPixmap(QPixmap(QString::fromUtf8(":/images/img/lock.svg")));
        label_18->setScaledContents(true);
        label_18->setAlignment(Qt::AlignCenter);

        verticalLayout_16->addWidget(frame_24);


        verticalLayout_15->addWidget(frame_21);

        frame_26 = new QFrame(frame_19);
        frame_26->setObjectName(QStringLiteral("frame_26"));
        frame_26->setFont(font1);
        frame_26->setStyleSheet(QStringLiteral("background:rgb(1, 141, 127);"));
        frame_26->setFrameShape(QFrame::StyledPanel);
        frame_26->setFrameShadow(QFrame::Raised);
        verticalLayout_39 = new QVBoxLayout(frame_26);
        verticalLayout_39->setObjectName(QStringLiteral("verticalLayout_39"));
        pushButton_signin = new QPushButton(frame_26);
        pushButton_signin->setObjectName(QStringLiteral("pushButton_signin"));
        pushButton_signin->setFont(font);
        pushButton_signin->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_signin->setStyleSheet(QLatin1String("padding: 10px;\n"
"color:rgb(1, 141, 127);\n"
"background: #fff;\n"
"border-radius: 10px;\n"
"text-align: center;"));

        verticalLayout_39->addWidget(pushButton_signin);

        frame_62 = new QFrame(frame_26);
        frame_62->setObjectName(QStringLiteral("frame_62"));
        frame_62->setStyleSheet(QStringLiteral("border: none"));
        frame_62->setFrameShape(QFrame::StyledPanel);
        frame_62->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(frame_62);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_113 = new QLabel(frame_62);
        label_113->setObjectName(QStringLiteral("label_113"));
        QFont font7;
        font7.setFamily(QStringLiteral("cambria"));
        font7.setPointSize(14);
        label_113->setFont(font7);
        label_113->setCursor(QCursor(Qt::PointingHandCursor));
        label_113->setStyleSheet(QLatin1String("border-bottom: 1px solid #fff;\n"
"color:#fff;"));

        horizontalLayout_11->addWidget(label_113);


        verticalLayout_39->addWidget(frame_62, 0, Qt::AlignHCenter);


        verticalLayout_15->addWidget(frame_26);


        verticalLayout_14->addWidget(frame_19);


        horizontalLayout_9->addWidget(frame_4);

        frame_23 = new QFrame(widget_4);
        frame_23->setObjectName(QStringLiteral("frame_23"));
        frame_23->setStyleSheet(QLatin1String("#frame_4{\n"
"    background:rgb(1, 141, 127);\n"
"    transform: translateX(100%);\n"
"     transition: 1s ease-in-out;\n"
"}\n"
"/* non intg */\n"
""));
        frame_23->setFrameShape(QFrame::StyledPanel);
        frame_23->setFrameShadow(QFrame::Raised);
        verticalLayout_17 = new QVBoxLayout(frame_23);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        frame_25 = new QFrame(frame_23);
        frame_25->setObjectName(QStringLiteral("frame_25"));
        frame_25->setStyleSheet(QLatin1String("   background:rgb(1, 141, 127);\n"
"border: none;"));
        frame_25->setFrameShape(QFrame::StyledPanel);
        frame_25->setFrameShadow(QFrame::Raised);
        horizontalLayout_12 = new QHBoxLayout(frame_25);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        frame_27 = new QFrame(frame_25);
        frame_27->setObjectName(QStringLiteral("frame_27"));
        frame_27->setFrameShape(QFrame::StyledPanel);
        frame_27->setFrameShadow(QFrame::Raised);
        verticalLayout_18 = new QVBoxLayout(frame_27);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        frame_28 = new QFrame(frame_27);
        frame_28->setObjectName(QStringLiteral("frame_28"));
        frame_28->setMaximumSize(QSize(220, 16777215));
        frame_28->setStyleSheet(QStringLiteral("text-align: center;"));
        frame_28->setFrameShape(QFrame::StyledPanel);
        frame_28->setFrameShadow(QFrame::Raised);
        gridLayout_8 = new QGridLayout(frame_28);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        label_13 = new QLabel(frame_28);
        label_13->setObjectName(QStringLiteral("label_13"));
        QFont font8;
        font8.setFamily(QStringLiteral("cambria"));
        font8.setPointSize(11);
        font8.setBold(true);
        font8.setWeight(75);
        label_13->setFont(font8);
        label_13->setStyleSheet(QStringLiteral("color:#fff;"));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_13, 0, 0, 1, 1);

        pushButton_signup = new QPushButton(frame_28);
        pushButton_signup->setObjectName(QStringLiteral("pushButton_signup"));
        pushButton_signup->setMinimumSize(QSize(200, 50));
        pushButton_signup->setMaximumSize(QSize(300, 80));
        pushButton_signup->setFont(font1);
        pushButton_signup->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_signup->setStyleSheet(QLatin1String(" width: 150px;\n"
"    height: 50px;\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    background: rgb(8, 103, 94);\n"
"    color: #fff;\n"
"    font-weight: 600;\n"
"    margin: 10px 0;\n"
"    text-transform: uppercase;\n"
"    cursor: pointer;\n"
"padding: 5px;"));

        gridLayout_8->addWidget(pushButton_signup, 1, 0, 1, 1);

        label_14 = new QLabel(frame_28);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_8->addWidget(label_14, 2, 0, 1, 1);


        verticalLayout_18->addWidget(frame_28);


        horizontalLayout_12->addWidget(frame_27);

        label_12 = new QLabel(frame_25);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(200, 300));
        label_12->setMaximumSize(QSize(300, 500));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/images/img/signup.png")));
        label_12->setScaledContents(true);

        horizontalLayout_12->addWidget(label_12);


        verticalLayout_17->addWidget(frame_25);


        horizontalLayout_9->addWidget(frame_23);


        horizontalLayout_8->addWidget(widget_4);

        stackedWidget->addWidget(page_4);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1233, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        label_3->setText(QString());
        pushButton_login->setText(QApplication::translate("MainWindow", "SE CONNECTER", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\303\212tes-vous employ\303\251(e)?\n"
"", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "ajouter un nouvel employ\303\251", Q_NULLPTR));
        lineEdit_MDP->setPlaceholderText(QApplication::translate("MainWindow", "mot de passe", Q_NULLPTR));
        label_20->setText(QString());
        lineEdit_ROLE->setPlaceholderText(QApplication::translate("MainWindow", "r\303\264le", Q_NULLPTR));
        label_24->setText(QString());
        lineEdit_ID->setPlaceholderText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        label_4->setText(QString());
        lineEdit_MAIL->setPlaceholderText(QApplication::translate("MainWindow", "e-mail", Q_NULLPTR));
        label_5->setText(QString());
        lineEdit_PRENOM->setPlaceholderText(QApplication::translate("MainWindow", "pr\303\251nom", Q_NULLPTR));
        label_6->setText(QString());
        lineEdit_MDP_C->setPlaceholderText(QApplication::translate("MainWindow", "confirmez", Q_NULLPTR));
        label_25->setText(QString());
        lineEdit_NOM->setPlaceholderText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        label_11->setText(QString());
        lineEdit_AGE->setPlaceholderText(QApplication::translate("MainWindow", "\303\242ge", Q_NULLPTR));
        label_7->setText(QString());
        pushButton_annuler->setText(QApplication::translate("MainWindow", "     Annuler     ", Q_NULLPTR));
        pushButton_AJOUTER->setText(QApplication::translate("MainWindow", "     AJOUTER     ", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "se connecter", Q_NULLPTR));
        lineEdit_clef_login->setPlaceholderText(QApplication::translate("MainWindow", "nom d'utilisateur", Q_NULLPTR));
        label_16->setText(QString());
        lineEdit_mdp_login->setPlaceholderText(QApplication::translate("MainWindow", "mot de passe", Q_NULLPTR));
        label_18->setText(QString());
        pushButton_signin->setText(QApplication::translate("MainWindow", "connexion", Q_NULLPTR));
        label_113->setText(QApplication::translate("MainWindow", "mot de passe oubli\303\251", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        frame_23->setWhatsThis(QApplication::translate("MainWindow", "#frame_4{\n"
"    position: relative;\n"
"    width:70vw;\n"
"    height: 80vh;\n"
"    background: #fff;\n"
"    border-radius: 15px;\n"
"    box-shadow: 0 4px 20px 0 rgba(0, 0, 0, 0.3), 0 6px 20px 0 rgba(0, 0, 0, 0.3);\n"
"    overflow: hidden;\n"
"}\n"
"/* non intg */\n"
"#frame_4::before{\n"
"    content: \"\";\n"
"    position: absolute;\n"
"    top: 0;\n"
"    left: -50%;\n"
"    width: 100%;\n"
"    height: 100%;\n"
"    background: linear-gradient(-45deg,rgb(1, 141, 127),rgb(8, 103, 94));\n"
"     z-index: 6;\n"
"     transform: translateX(100%);\n"
"     transition: 1s ease-in-out;\n"
"}", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label_13->setText(QApplication::translate("MainWindow", "Je suis un nouvel \n"
"employ\303\251", Q_NULLPTR));
        pushButton_signup->setText(QApplication::translate("MainWindow", "Cr\303\251er un compte", Q_NULLPTR));
        label_14->setText(QString());
        label_12->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
