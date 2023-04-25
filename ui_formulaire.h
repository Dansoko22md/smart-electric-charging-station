/********************************************************************************
** Form generated from reading UI file 'formulaire.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMULAIRE_H
#define UI_FORMULAIRE_H

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

class Ui_Formulaire
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame_f1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_5;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_login;
    QLabel *label_3;
    QLabel *label_2;
    QFrame *frame_r1;
    QVBoxLayout *verticalLayout_6;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QFrame *frame_form;
    QGridLayout *gridLayout_4;
    QFrame *frame_mdp;
    QLineEdit *lineEdit_MDP;
    QLabel *label_20;
    QFrame *frame_role;
    QLabel *label_24;
    QComboBox *comboBox;
    QFrame *frame_id;
    QLineEdit *lineEdit_ID;
    QLabel *label_4;
    QFrame *frame_mail;
    QLineEdit *lineEdit_MAIL;
    QLabel *label_5;
    QFrame *frame_prenom;
    QLineEdit *lineEdit_PRENOM;
    QLabel *label_6;
    QFrame *frame_mdpc;
    QLineEdit *lineEdit_MDP_C;
    QLabel *label_25;
    QFrame *frame_nom;
    QLineEdit *lineEdit_NOM;
    QLabel *label_11;
    QFrame *frame_age;
    QLineEdit *lineEdit_AGE;
    QLabel *label_7;
    QFrame *frame_9;
    QHBoxLayout *horizontalLayout_13;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_annuler;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_AJOUTER;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_18;
    QLineEdit *lineEdit_MESSAGE;
    QWidget *page_4;
    QHBoxLayout *horizontalLayout_8;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_9;
    QFrame *frame_f2;
    QVBoxLayout *verticalLayout_14;
    QFrame *frame_19;
    QVBoxLayout *verticalLayout_15;
    QFrame *frame_20;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_15;
    QFrame *frame_21;
    QVBoxLayout *verticalLayout_16;
    QFrame *frame_l_clef;
    QLineEdit *lineEdit_clef_login;
    QLabel *label_16;
    QFrame *frame_l_mdp;
    QLineEdit *lineEdit_mdp_login;
    QLabel *label_18;
    QPushButton *pushButton_hidden_mdp;
    QFrame *frame_26;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_62;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_signin;
    QPushButton *pushButton_forgot_pw;
    QFrame *frame_r2;
    QVBoxLayout *verticalLayout_17;
    QFrame *frame_25;
    QHBoxLayout *horizontalLayout_12;
    QFrame *frame_27;
    QVBoxLayout *verticalLayout_18;
    QFrame *frame_28;
    QGridLayout *gridLayout_8;
    QLabel *label_update;
    QPushButton *pushButton_signup;
    QPushButton *pushButton_scanAgent;
    QLabel *label_13;
    QPushButton *pushButton_scanner;
    QLabel *label_12;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Formulaire)
    {
        if (Formulaire->objectName().isEmpty())
            Formulaire->setObjectName(QStringLiteral("Formulaire"));
        Formulaire->resize(1232, 647);
        centralwidget = new QWidget(Formulaire);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QLatin1String("#frame_id{\n"
"background: #f0f0f0;\n"
"border: 2px solid rgb(1, 141, 127);\n"
"border-radius: 10px;}"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setStyleSheet(QStringLiteral("border: 1px solid #fff;"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        horizontalLayout_3 = new QHBoxLayout(page_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        widget_3 = new QWidget(page_3);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setStyleSheet(QStringLiteral(""));
        horizontalLayout_4 = new QHBoxLayout(widget_3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        frame_f1 = new QFrame(widget_3);
        frame_f1->setObjectName(QStringLiteral("frame_f1"));
        frame_f1->setStyleSheet(QLatin1String("background:rgb(1, 141, 127);\n"
"border: none;"));
        frame_f1->setFrameShape(QFrame::StyledPanel);
        frame_f1->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_f1);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(frame_f1);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(100, 300));
        label->setMaximumSize(QSize(550, 1000));
        label->setCursor(QCursor(Qt::PointingHandCursor));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/img/login.png")));
        label->setScaledContents(true);

        horizontalLayout_5->addWidget(label);

        frame_6 = new QFrame(frame_f1);
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
"    border-radius: 20px;\n"
"    background: rgb(8, 103, 94);\n"
"    color: #fff;\n"
"    font-weight: 600;\n"
"    margin: 10px 0;\n"
"   \n"
"    \n"
"padding: 5px;"));

        gridLayout_3->addWidget(pushButton_login, 1, 0, 1, 1);

        label_3 = new QLabel(frame_5);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

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


        horizontalLayout_4->addWidget(frame_f1);

        frame_r1 = new QFrame(widget_3);
        frame_r1->setObjectName(QStringLiteral("frame_r1"));
        frame_r1->setStyleSheet(QLatin1String("background:#fff;\n"
"\n"
""));
        frame_r1->setFrameShape(QFrame::StyledPanel);
        frame_r1->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_r1);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        frame_7 = new QFrame(frame_r1);
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

        frame_form = new QFrame(frame_r1);
        frame_form->setObjectName(QStringLiteral("frame_form"));
        frame_form->setStyleSheet(QStringLiteral("color: #868686;"));
        frame_form->setFrameShape(QFrame::StyledPanel);
        frame_form->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_form);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        frame_mdp = new QFrame(frame_form);
        frame_mdp->setObjectName(QStringLiteral("frame_mdp"));
        frame_mdp->setMinimumSize(QSize(0, 50));
        frame_mdp->setMaximumSize(QSize(16777215, 100));
        frame_mdp->setStyleSheet(QLatin1String("#frame_mdp{\n"
"background: #f0f0f0;\n"
"border: 2px solid rgb(1, 141, 127);\n"
"border-radius: 20px;}\n"
"#lineEdit_ID:focus #frame_id{\n"
"border: 2px solid #fff;\n"
"\n"
"}"));
        frame_mdp->setFrameShape(QFrame::StyledPanel);
        frame_mdp->setFrameShadow(QFrame::Raised);
        lineEdit_MDP = new QLineEdit(frame_mdp);
        lineEdit_MDP->setObjectName(QStringLiteral("lineEdit_MDP"));
        lineEdit_MDP->setGeometry(QRect(30, 10, 250, 30));
        lineEdit_MDP->setMinimumSize(QSize(250, 30));
        lineEdit_MDP->setMaximumSize(QSize(200, 30));
        QFont font3;
        font3.setFamily(QStringLiteral("cambria"));
        font3.setPointSize(13);
        lineEdit_MDP->setFont(font3);
        lineEdit_MDP->setStyleSheet(QLatin1String("background: #f0f0f0;\n"
"border:none;"));
        lineEdit_MDP->setEchoMode(QLineEdit::Password);
        lineEdit_MDP->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(frame_mdp);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(10, 10, 25, 30));
        label_20->setMinimumSize(QSize(25, 30));
        label_20->setMaximumSize(QSize(20, 30));
        label_20->setStyleSheet(QLatin1String("border: none;\n"
"background: none;"));
        label_20->setPixmap(QPixmap(QString::fromUtf8(":/images/img/lock.png")));
        label_20->setScaledContents(true);
        label_20->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(frame_mdp, 3, 0, 1, 1);

        frame_role = new QFrame(frame_form);
        frame_role->setObjectName(QStringLiteral("frame_role"));
        frame_role->setMinimumSize(QSize(0, 50));
        frame_role->setMaximumSize(QSize(16777215, 100));
        frame_role->setStyleSheet(QLatin1String("#frame_role{\n"
"background: #f0f0f0;\n"
"border: 2px solid rgb(1, 141, 127);\n"
"border-radius: 20px;}\n"
"#lineEdit_ID:focus #frame_id{\n"
"border: 2px solid #fff;\n"
"\n"
"}"));
        frame_role->setFrameShape(QFrame::StyledPanel);
        frame_role->setFrameShadow(QFrame::Raised);
        label_24 = new QLabel(frame_role);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(10, 10, 25, 30));
        label_24->setMinimumSize(QSize(25, 30));
        label_24->setMaximumSize(QSize(20, 30));
        label_24->setStyleSheet(QLatin1String("border: none;\n"
"background: none;"));
        label_24->setPixmap(QPixmap(QString::fromUtf8(":/icons/suitcase.png")));
        label_24->setScaledContents(true);
        label_24->setAlignment(Qt::AlignCenter);
        comboBox = new QComboBox(frame_role);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(40, 10, 251, 30));
        comboBox->setMinimumSize(QSize(0, 30));
        comboBox->setMaximumSize(QSize(16777215, 30));
        QFont font4;
        font4.setFamily(QStringLiteral("cambria"));
        font4.setPointSize(12);
        comboBox->setFont(font4);
        comboBox->setStyleSheet(QLatin1String("background: #f0f0f0;\n"
"border:none;"));

        gridLayout_4->addWidget(frame_role, 2, 1, 1, 1);

        frame_id = new QFrame(frame_form);
        frame_id->setObjectName(QStringLiteral("frame_id"));
        frame_id->setMinimumSize(QSize(0, 50));
        frame_id->setMaximumSize(QSize(16777215, 100));
        frame_id->setStyleSheet(QLatin1String("#frame_id{\n"
"background: #f0f0f0;\n"
"border: 2px solid rgb(1, 141, 127);\n"
"border-radius: 20px;}\n"
"#lineEdit_ID:focus #frame_id{\n"
"border: 2px solid #fff;\n"
"\n"
"}"));
        frame_id->setFrameShape(QFrame::StyledPanel);
        frame_id->setFrameShadow(QFrame::Raised);
        lineEdit_ID = new QLineEdit(frame_id);
        lineEdit_ID->setObjectName(QStringLiteral("lineEdit_ID"));
        lineEdit_ID->setGeometry(QRect(30, 10, 250, 30));
        lineEdit_ID->setMinimumSize(QSize(250, 30));
        lineEdit_ID->setMaximumSize(QSize(200, 30));
        lineEdit_ID->setFont(font3);
        lineEdit_ID->setStyleSheet(QLatin1String("background: #f0f0f0;\n"
"border:none;"));
        lineEdit_ID->setEchoMode(QLineEdit::Normal);
        lineEdit_ID->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(frame_id);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 25, 30));
        label_4->setMinimumSize(QSize(25, 30));
        label_4->setMaximumSize(QSize(20, 30));
        label_4->setStyleSheet(QLatin1String("border: none;\n"
"background: none;"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/icons/ID.png")));
        label_4->setScaledContents(true);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(frame_id, 0, 0, 1, 1);

        frame_mail = new QFrame(frame_form);
        frame_mail->setObjectName(QStringLiteral("frame_mail"));
        frame_mail->setMinimumSize(QSize(0, 50));
        frame_mail->setMaximumSize(QSize(16777215, 100));
        frame_mail->setStyleSheet(QLatin1String("#frame_mail{\n"
"background: #f0f0f0;\n"
"border: 2px solid rgb(1, 141, 127);\n"
"border-radius: 20px;}\n"
"#lineEdit_ID:focus #frame_id{\n"
"border: 2px solid #fff;\n"
"\n"
"}"));
        frame_mail->setFrameShape(QFrame::StyledPanel);
        frame_mail->setFrameShadow(QFrame::Raised);
        lineEdit_MAIL = new QLineEdit(frame_mail);
        lineEdit_MAIL->setObjectName(QStringLiteral("lineEdit_MAIL"));
        lineEdit_MAIL->setGeometry(QRect(30, 10, 250, 30));
        lineEdit_MAIL->setMinimumSize(QSize(250, 30));
        lineEdit_MAIL->setMaximumSize(QSize(200, 30));
        lineEdit_MAIL->setFont(font3);
        lineEdit_MAIL->setStyleSheet(QLatin1String("background: #f0f0f0;\n"
"border:none;"));
        lineEdit_MAIL->setEchoMode(QLineEdit::Normal);
        lineEdit_MAIL->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(frame_mail);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 10, 25, 30));
        label_5->setMinimumSize(QSize(25, 30));
        label_5->setMaximumSize(QSize(20, 30));
        label_5->setStyleSheet(QLatin1String("border: none;\n"
"background: none;"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/icons/ml.png")));
        label_5->setScaledContents(true);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(frame_mail, 1, 0, 1, 1);

        frame_prenom = new QFrame(frame_form);
        frame_prenom->setObjectName(QStringLiteral("frame_prenom"));
        frame_prenom->setMinimumSize(QSize(0, 50));
        frame_prenom->setMaximumSize(QSize(16777215, 100));
        frame_prenom->setStyleSheet(QLatin1String("#frame_prenom{\n"
"background: #f0f0f0;\n"
"border: 2px solid rgb(1, 141, 127);\n"
"border-radius: 20px;}\n"
"#lineEdit_ID:focus #frame_id{\n"
"border: 2px solid #fff;\n"
"\n"
"}"));
        frame_prenom->setFrameShape(QFrame::StyledPanel);
        frame_prenom->setFrameShadow(QFrame::Raised);
        lineEdit_PRENOM = new QLineEdit(frame_prenom);
        lineEdit_PRENOM->setObjectName(QStringLiteral("lineEdit_PRENOM"));
        lineEdit_PRENOM->setGeometry(QRect(40, 10, 250, 30));
        lineEdit_PRENOM->setMinimumSize(QSize(250, 30));
        lineEdit_PRENOM->setMaximumSize(QSize(250, 30));
        lineEdit_PRENOM->setFont(font3);
        lineEdit_PRENOM->setStyleSheet(QLatin1String("background: #f0f0f0;\n"
"border:none;"));
        lineEdit_PRENOM->setEchoMode(QLineEdit::Normal);
        lineEdit_PRENOM->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(frame_prenom);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 10, 25, 30));
        label_6->setMinimumSize(QSize(25, 30));
        label_6->setMaximumSize(QSize(20, 30));
        label_6->setStyleSheet(QLatin1String("border: none;\n"
"background: none;"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/images/img/user.png")));
        label_6->setScaledContents(true);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(frame_prenom, 1, 1, 1, 1);

        frame_mdpc = new QFrame(frame_form);
        frame_mdpc->setObjectName(QStringLiteral("frame_mdpc"));
        frame_mdpc->setMinimumSize(QSize(0, 50));
        frame_mdpc->setMaximumSize(QSize(16777215, 100));
        frame_mdpc->setStyleSheet(QLatin1String("#frame_mdpc{\n"
"background: #f0f0f0;\n"
"border: 2px solid rgb(1, 141, 127);\n"
"border-radius: 20px;}\n"
"#lineEdit_ID:focus #frame_id{\n"
"border: 2px solid #fff;\n"
"\n"
"}"));
        frame_mdpc->setFrameShape(QFrame::StyledPanel);
        frame_mdpc->setFrameShadow(QFrame::Raised);
        lineEdit_MDP_C = new QLineEdit(frame_mdpc);
        lineEdit_MDP_C->setObjectName(QStringLiteral("lineEdit_MDP_C"));
        lineEdit_MDP_C->setGeometry(QRect(40, 10, 250, 30));
        lineEdit_MDP_C->setMinimumSize(QSize(250, 30));
        lineEdit_MDP_C->setMaximumSize(QSize(200, 30));
        lineEdit_MDP_C->setFont(font3);
        lineEdit_MDP_C->setStyleSheet(QLatin1String("background: #f0f0f0;\n"
"border:none;"));
        lineEdit_MDP_C->setEchoMode(QLineEdit::Password);
        lineEdit_MDP_C->setAlignment(Qt::AlignCenter);
        label_25 = new QLabel(frame_mdpc);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 10, 25, 30));
        label_25->setMinimumSize(QSize(25, 30));
        label_25->setMaximumSize(QSize(20, 30));
        label_25->setStyleSheet(QLatin1String("border: none;\n"
"background: none;"));
        label_25->setPixmap(QPixmap(QString::fromUtf8(":/images/img/lock.png")));
        label_25->setScaledContents(true);
        label_25->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(frame_mdpc, 3, 1, 1, 1);

        frame_nom = new QFrame(frame_form);
        frame_nom->setObjectName(QStringLiteral("frame_nom"));
        frame_nom->setMinimumSize(QSize(0, 50));
        frame_nom->setMaximumSize(QSize(16777215, 100));
        frame_nom->setStyleSheet(QLatin1String("#frame_nom{\n"
"background: #f0f0f0;\n"
"border: 2px solid rgb(1, 141, 127);\n"
"border-radius: 20px;}\n"
"#lineEdit_NOM:focus #frame_id{\n"
"border: 2px solid #fff;\n"
"\n"
"}"));
        frame_nom->setFrameShape(QFrame::StyledPanel);
        frame_nom->setFrameShadow(QFrame::Raised);
        lineEdit_NOM = new QLineEdit(frame_nom);
        lineEdit_NOM->setObjectName(QStringLiteral("lineEdit_NOM"));
        lineEdit_NOM->setGeometry(QRect(40, 10, 250, 30));
        lineEdit_NOM->setMinimumSize(QSize(250, 30));
        lineEdit_NOM->setMaximumSize(QSize(200, 30));
        lineEdit_NOM->setFont(font3);
        lineEdit_NOM->setStyleSheet(QLatin1String("background: #f0f0f0;\n"
"border:none;"));
        lineEdit_NOM->setEchoMode(QLineEdit::Normal);
        lineEdit_NOM->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(frame_nom);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 10, 25, 30));
        label_11->setMinimumSize(QSize(25, 30));
        label_11->setMaximumSize(QSize(20, 30));
        label_11->setStyleSheet(QLatin1String("border: none;\n"
"background: none;"));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/images/img/user-check.svg")));
        label_11->setScaledContents(true);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(frame_nom, 0, 1, 1, 1);

        frame_age = new QFrame(frame_form);
        frame_age->setObjectName(QStringLiteral("frame_age"));
        frame_age->setMinimumSize(QSize(0, 50));
        frame_age->setMaximumSize(QSize(16777215, 100));
        frame_age->setStyleSheet(QLatin1String("#frame_age{\n"
"background: #f0f0f0;\n"
"border: 2px solid rgb(1, 141, 127);\n"
"border-radius: 20px;}\n"
"#lineEdit_ID:focus #frame_id{\n"
"border: 2px solid #fff;\n"
"\n"
"}"));
        frame_age->setFrameShape(QFrame::StyledPanel);
        frame_age->setFrameShadow(QFrame::Raised);
        lineEdit_AGE = new QLineEdit(frame_age);
        lineEdit_AGE->setObjectName(QStringLiteral("lineEdit_AGE"));
        lineEdit_AGE->setGeometry(QRect(30, 10, 250, 30));
        lineEdit_AGE->setMinimumSize(QSize(250, 30));
        lineEdit_AGE->setMaximumSize(QSize(200, 30));
        lineEdit_AGE->setFont(font3);
        lineEdit_AGE->setStyleSheet(QLatin1String("background: #f0f0f0;\n"
"border:none;"));
        lineEdit_AGE->setEchoMode(QLineEdit::Normal);
        lineEdit_AGE->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(frame_age);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 10, 25, 30));
        label_7->setMinimumSize(QSize(25, 30));
        label_7->setMaximumSize(QSize(20, 30));
        label_7->setStyleSheet(QLatin1String("border: none;\n"
"background: none;"));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/images/img/check-circle.svg")));
        label_7->setScaledContents(true);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(frame_age, 2, 0, 1, 1);


        verticalLayout_6->addWidget(frame_form);

        frame_9 = new QFrame(frame_r1);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        frame_9->setStyleSheet(QStringLiteral("background:none;"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        horizontalLayout_13 = new QHBoxLayout(frame_9);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        frame_3 = new QFrame(frame_9);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(frame_3);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        pushButton_annuler = new QPushButton(frame_3);
        pushButton_annuler->setObjectName(QStringLiteral("pushButton_annuler"));
        pushButton_annuler->setMaximumSize(QSize(16777215, 50));
        QFont font5;
        font5.setFamily(QStringLiteral("cambria"));
        font5.setPointSize(16);
        font5.setBold(true);
        font5.setWeight(75);
        pushButton_annuler->setFont(font5);
        pushButton_annuler->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_annuler->setStyleSheet(QLatin1String("border-radius: 20px;\n"
"background: none;\n"
"color:rgb(1, 141, 127);\n"
"border: 1px solid rgb(1, 141, 127);\n"
"padding: 10px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/clear-icon-15.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_annuler->setIcon(icon);
        pushButton_annuler->setIconSize(QSize(50, 50));

        horizontalLayout_11->addWidget(pushButton_annuler, 0, Qt::AlignHCenter);


        horizontalLayout_13->addWidget(frame_3);

        frame_2 = new QFrame(frame_9);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_2);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        pushButton_AJOUTER = new QPushButton(frame_2);
        pushButton_AJOUTER->setObjectName(QStringLiteral("pushButton_AJOUTER"));
        pushButton_AJOUTER->setMaximumSize(QSize(16777215, 50));
        pushButton_AJOUTER->setFont(font);
        pushButton_AJOUTER->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_AJOUTER->setStyleSheet(QLatin1String("border-radius: 20px;\n"
"padding:15px;\n"
"background: rgb(1, 141, 127);\n"
"color:#fff;"));
        pushButton_AJOUTER->setIconSize(QSize(30, 30));

        horizontalLayout_7->addWidget(pushButton_AJOUTER, 0, Qt::AlignHCenter);


        horizontalLayout_13->addWidget(frame_2);


        verticalLayout_6->addWidget(frame_9);

        frame_8 = new QFrame(frame_r1);
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


        horizontalLayout_4->addWidget(frame_r1);


        horizontalLayout_3->addWidget(widget_3);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        horizontalLayout_8 = new QHBoxLayout(page_4);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        widget_4 = new QWidget(page_4);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setStyleSheet(QStringLiteral("border: 1px solid #fff;"));
        horizontalLayout_9 = new QHBoxLayout(widget_4);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        frame_f2 = new QFrame(widget_4);
        frame_f2->setObjectName(QStringLiteral("frame_f2"));
        frame_f2->setStyleSheet(QStringLiteral("   background:#fff;"));
        frame_f2->setFrameShape(QFrame::StyledPanel);
        frame_f2->setFrameShadow(QFrame::Raised);
        verticalLayout_14 = new QVBoxLayout(frame_f2);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        frame_19 = new QFrame(frame_f2);
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
        frame_l_clef = new QFrame(frame_21);
        frame_l_clef->setObjectName(QStringLiteral("frame_l_clef"));
        frame_l_clef->setMinimumSize(QSize(0, 50));
        frame_l_clef->setMaximumSize(QSize(16777215, 50));
        frame_l_clef->setStyleSheet(QLatin1String("\n"
"#frame_l_clef{\n"
"background: #f0f0f0;\n"
"border: 2px solid rgb(1, 141, 127);\n"
"border-radius: 20px;\n"
"color: #868686;\n"
"}\n"
"#lineEdit_ID:focus #frame_id{\n"
"border: 2px solid #fff;\n"
"\n"
"}"));
        frame_l_clef->setFrameShape(QFrame::StyledPanel);
        frame_l_clef->setFrameShadow(QFrame::Raised);
        lineEdit_clef_login = new QLineEdit(frame_l_clef);
        lineEdit_clef_login->setObjectName(QStringLiteral("lineEdit_clef_login"));
        lineEdit_clef_login->setGeometry(QRect(20, 10, 450, 30));
        lineEdit_clef_login->setMinimumSize(QSize(450, 30));
        lineEdit_clef_login->setMaximumSize(QSize(400, 30));
        lineEdit_clef_login->setFont(font3);
        lineEdit_clef_login->setStyleSheet(QLatin1String("background: #f0f0f0;\n"
"border:none;\n"
"color: #868686;"));
        lineEdit_clef_login->setEchoMode(QLineEdit::Normal);
        lineEdit_clef_login->setAlignment(Qt::AlignCenter);
        label_16 = new QLabel(frame_l_clef);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(20, 10, 25, 30));
        label_16->setMinimumSize(QSize(25, 30));
        label_16->setMaximumSize(QSize(20, 30));
        label_16->setStyleSheet(QLatin1String("background: #f0f0f0;\n"
"border:none;"));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/icons/ml.png")));
        label_16->setScaledContents(true);
        label_16->setAlignment(Qt::AlignCenter);

        verticalLayout_16->addWidget(frame_l_clef);

        frame_l_mdp = new QFrame(frame_21);
        frame_l_mdp->setObjectName(QStringLiteral("frame_l_mdp"));
        frame_l_mdp->setMinimumSize(QSize(0, 50));
        frame_l_mdp->setMaximumSize(QSize(16777215, 50));
        frame_l_mdp->setStyleSheet(QLatin1String("\n"
"#frame_l_mdp{\n"
"background: #f0f0f0;\n"
"border: 2px solid rgb(1, 141, 127);\n"
"border-radius: 20px;\n"
"color: #868686;\n"
"}\n"
"#lineEdit_ID:focus #frame_id{\n"
"border: 2px solid #fff;\n"
"\n"
"}"));
        frame_l_mdp->setFrameShape(QFrame::StyledPanel);
        frame_l_mdp->setFrameShadow(QFrame::Raised);
        lineEdit_mdp_login = new QLineEdit(frame_l_mdp);
        lineEdit_mdp_login->setObjectName(QStringLiteral("lineEdit_mdp_login"));
        lineEdit_mdp_login->setGeometry(QRect(40, 10, 400, 30));
        lineEdit_mdp_login->setMinimumSize(QSize(400, 30));
        lineEdit_mdp_login->setMaximumSize(QSize(400, 30));
        lineEdit_mdp_login->setFont(font3);
        lineEdit_mdp_login->setStyleSheet(QLatin1String("background: #f0f0f0;\n"
"border:none;\n"
"color: #868686;"));
        lineEdit_mdp_login->setEchoMode(QLineEdit::Password);
        lineEdit_mdp_login->setAlignment(Qt::AlignCenter);
        label_18 = new QLabel(frame_l_mdp);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(20, 10, 25, 30));
        label_18->setMinimumSize(QSize(25, 30));
        label_18->setMaximumSize(QSize(20, 30));
        label_18->setStyleSheet(QLatin1String("background: #f0f0f0;\n"
"border:none;"));
        label_18->setPixmap(QPixmap(QString::fromUtf8(":/images/img/lock.png")));
        label_18->setScaledContents(true);
        label_18->setAlignment(Qt::AlignCenter);
        pushButton_hidden_mdp = new QPushButton(frame_l_mdp);
        pushButton_hidden_mdp->setObjectName(QStringLiteral("pushButton_hidden_mdp"));
        pushButton_hidden_mdp->setGeometry(QRect(410, 10, 31, 28));
        pushButton_hidden_mdp->setStyleSheet(QLatin1String("background: #f0f0f0;\n"
"border:none;"));
        pushButton_hidden_mdp->setIconSize(QSize(30, 30));

        verticalLayout_16->addWidget(frame_l_mdp);


        verticalLayout_15->addWidget(frame_21);

        frame_26 = new QFrame(frame_19);
        frame_26->setObjectName(QStringLiteral("frame_26"));
        frame_26->setFont(font1);
        frame_26->setStyleSheet(QStringLiteral("background: none;"));
        frame_26->setFrameShape(QFrame::StyledPanel);
        frame_26->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_26);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        frame_62 = new QFrame(frame_26);
        frame_62->setObjectName(QStringLiteral("frame_62"));
        frame_62->setStyleSheet(QStringLiteral("border: none"));
        frame_62->setFrameShape(QFrame::StyledPanel);
        frame_62->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_62);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(frame_62);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_signin = new QPushButton(frame);
        pushButton_signin->setObjectName(QStringLiteral("pushButton_signin"));
        pushButton_signin->setFont(font);
        pushButton_signin->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_signin->setStyleSheet(QLatin1String("border-radius: 20px;\n"
"padding:15px;\n"
"background: rgb(1, 141, 127);\n"
"color:#fff;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/Key.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_signin->setIcon(icon1);
        pushButton_signin->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButton_signin, 0, Qt::AlignHCenter);


        verticalLayout_2->addWidget(frame);

        pushButton_forgot_pw = new QPushButton(frame_62);
        pushButton_forgot_pw->setObjectName(QStringLiteral("pushButton_forgot_pw"));
        QFont font7;
        font7.setPointSize(14);
        pushButton_forgot_pw->setFont(font7);
        pushButton_forgot_pw->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_forgot_pw->setStyleSheet(QLatin1String("border-bottom: 1px solid rgb(1, 141, 127);\n"
"color:rgb(1, 141, 127);\n"
""));

        verticalLayout_2->addWidget(pushButton_forgot_pw, 0, Qt::AlignHCenter);


        horizontalLayout_2->addWidget(frame_62);


        verticalLayout_15->addWidget(frame_26);


        verticalLayout_14->addWidget(frame_19);


        horizontalLayout_9->addWidget(frame_f2);

        frame_r2 = new QFrame(widget_4);
        frame_r2->setObjectName(QStringLiteral("frame_r2"));
        frame_r2->setStyleSheet(QLatin1String("\n"
"    background:rgb(1, 141, 127);\n"
"    transform: translateX(100%);\n"
"     transition: 1s ease-in-out;\n"
"border: 1px solid #fff;\n"
""));
        frame_r2->setFrameShape(QFrame::StyledPanel);
        frame_r2->setFrameShadow(QFrame::Raised);
        verticalLayout_17 = new QVBoxLayout(frame_r2);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        frame_25 = new QFrame(frame_r2);
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
        label_update = new QLabel(frame_28);
        label_update->setObjectName(QStringLiteral("label_update"));

        gridLayout_8->addWidget(label_update, 4, 0, 1, 1);

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
"    \n"
"    \n"
"padding: 5px;"));

        gridLayout_8->addWidget(pushButton_signup, 1, 0, 1, 1);

        pushButton_scanAgent = new QPushButton(frame_28);
        pushButton_scanAgent->setObjectName(QStringLiteral("pushButton_scanAgent"));
        QFont font8;
        font8.setPointSize(15);
        pushButton_scanAgent->setFont(font8);
        pushButton_scanAgent->setStyleSheet(QStringLiteral("background-color:  rgb(8, 103, 94);color: #fff;border-radius: 10px;"));

        gridLayout_8->addWidget(pushButton_scanAgent, 5, 0, 1, 1);

        label_13 = new QLabel(frame_28);
        label_13->setObjectName(QStringLiteral("label_13"));
        QFont font9;
        font9.setFamily(QStringLiteral("cambria"));
        font9.setPointSize(11);
        font9.setBold(true);
        font9.setWeight(75);
        label_13->setFont(font9);
        label_13->setStyleSheet(QStringLiteral("color:#fff;"));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_13, 0, 0, 1, 1);

        pushButton_scanner = new QPushButton(frame_28);
        pushButton_scanner->setObjectName(QStringLiteral("pushButton_scanner"));
        pushButton_scanner->setFont(font8);
        pushButton_scanner->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_scanner->setStyleSheet(QStringLiteral("background-color:  rgb(8, 103, 94);color: #fff;border-radius: 10px;"));

        gridLayout_8->addWidget(pushButton_scanner, 6, 0, 1, 1);


        verticalLayout_18->addWidget(frame_28);


        horizontalLayout_12->addWidget(frame_27);

        label_12 = new QLabel(frame_25);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(200, 300));
        label_12->setMaximumSize(QSize(300, 500));
        label_12->setCursor(QCursor(Qt::PointingHandCursor));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/images/img/signup.png")));
        label_12->setScaledContents(true);

        horizontalLayout_12->addWidget(label_12);


        verticalLayout_17->addWidget(frame_25);


        horizontalLayout_9->addWidget(frame_r2);


        horizontalLayout_8->addWidget(widget_4);

        stackedWidget->addWidget(page_4);

        verticalLayout->addWidget(stackedWidget);

        Formulaire->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Formulaire);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1232, 26));
        Formulaire->setMenuBar(menubar);
        statusbar = new QStatusBar(Formulaire);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Formulaire->setStatusBar(statusbar);

        retranslateUi(Formulaire);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Formulaire);
    } // setupUi

    void retranslateUi(QMainWindow *Formulaire)
    {
        Formulaire->setWindowTitle(QApplication::translate("Formulaire", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        pushButton_login->setText(QApplication::translate("Formulaire", "SE CONNECTER", Q_NULLPTR));
        label_3->setText(QString());
        label_2->setText(QApplication::translate("Formulaire", "\303\212tes-vous employ\303\251(e)?\n"
"", Q_NULLPTR));
        label_8->setText(QApplication::translate("Formulaire", "Cr\303\251er un compte", Q_NULLPTR));
        lineEdit_MDP->setPlaceholderText(QApplication::translate("Formulaire", "mot de passe", Q_NULLPTR));
        label_20->setText(QString());
        label_24->setText(QString());
        lineEdit_ID->setPlaceholderText(QApplication::translate("Formulaire", "ID", Q_NULLPTR));
        label_4->setText(QString());
        lineEdit_MAIL->setPlaceholderText(QApplication::translate("Formulaire", "e-mail", Q_NULLPTR));
        label_5->setText(QString());
        lineEdit_PRENOM->setPlaceholderText(QApplication::translate("Formulaire", "pr\303\251nom", Q_NULLPTR));
        label_6->setText(QString());
        lineEdit_MDP_C->setPlaceholderText(QApplication::translate("Formulaire", "confirmez", Q_NULLPTR));
        label_25->setText(QString());
        lineEdit_NOM->setPlaceholderText(QApplication::translate("Formulaire", "nom", Q_NULLPTR));
        label_11->setText(QString());
        lineEdit_AGE->setPlaceholderText(QApplication::translate("Formulaire", "\303\242ge", Q_NULLPTR));
        label_7->setText(QString());
        pushButton_annuler->setText(QApplication::translate("Formulaire", "annuler", Q_NULLPTR));
        pushButton_AJOUTER->setText(QApplication::translate("Formulaire", "cr\303\251er mon compte", Q_NULLPTR));
        label_15->setText(QApplication::translate("Formulaire", "se connecter", Q_NULLPTR));
        lineEdit_clef_login->setPlaceholderText(QApplication::translate("Formulaire", "adresse e-mail", Q_NULLPTR));
        label_16->setText(QString());
        lineEdit_mdp_login->setPlaceholderText(QApplication::translate("Formulaire", "mot de passe", Q_NULLPTR));
        label_18->setText(QString());
        pushButton_hidden_mdp->setText(QString());
        pushButton_signin->setText(QApplication::translate("Formulaire", "s'authentifier", Q_NULLPTR));
        pushButton_forgot_pw->setText(QApplication::translate("Formulaire", "mot de passe oubli\303\251", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        frame_r2->setWhatsThis(QApplication::translate("Formulaire", "#frame_4{\n"
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
        label_update->setText(QString());
        pushButton_signup->setText(QApplication::translate("Formulaire", "Cr\303\251er un compte", Q_NULLPTR));
        pushButton_scanAgent->setText(QApplication::translate("Formulaire", "SCAN AGENT", Q_NULLPTR));
        label_13->setText(QApplication::translate("Formulaire", "J'ai pas de compte", Q_NULLPTR));
        pushButton_scanner->setText(QApplication::translate("Formulaire", "SCAN ADMIN", Q_NULLPTR));
        label_12->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Formulaire: public Ui_Formulaire {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULAIRE_H
