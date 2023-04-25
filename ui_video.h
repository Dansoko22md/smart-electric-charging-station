/********************************************************************************
** Form generated from reading UI file 'video.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEO_H
#define UI_VIDEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_video
{
public:
    QAction *actionfile;
    QWidget *centralwidget;
    QPushButton *pb_importervid;
    QPushButton *pb_stop;
    QPushButton *pb_play;
    QPushButton *pb_pause;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *video)
    {
        if (video->objectName().isEmpty())
            video->setObjectName(QStringLiteral("video"));
        video->resize(587, 597);
        QFont font;
        font.setPointSize(1);
        video->setFont(font);
        actionfile = new QAction(video);
        actionfile->setObjectName(QStringLiteral("actionfile"));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../Desktop/2A16/projet c++/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionfile->setIcon(icon);
        centralwidget = new QWidget(video);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pb_importervid = new QPushButton(centralwidget);
        pb_importervid->setObjectName(QStringLiteral("pb_importervid"));
        pb_importervid->setGeometry(QRect(20, 470, 121, 41));
        QFont font1;
        font1.setPointSize(13);
        pb_importervid->setFont(font1);
        pb_stop = new QPushButton(centralwidget);
        pb_stop->setObjectName(QStringLiteral("pb_stop"));
        pb_stop->setGeometry(QRect(460, 470, 71, 41));
        pb_stop->setFont(font1);
        pb_play = new QPushButton(centralwidget);
        pb_play->setObjectName(QStringLiteral("pb_play"));
        pb_play->setGeometry(QRect(350, 470, 61, 41));
        pb_play->setFont(font1);
        pb_pause = new QPushButton(centralwidget);
        pb_pause->setObjectName(QStringLiteral("pb_pause"));
        pb_pause->setGeometry(QRect(240, 470, 71, 41));
        pb_pause->setFont(font1);
        video->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(video);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        video->setStatusBar(statusbar);

        retranslateUi(video);

        QMetaObject::connectSlotsByName(video);
    } // setupUi

    void retranslateUi(QMainWindow *video)
    {
        video->setWindowTitle(QApplication::translate("video", "MainWindow", Q_NULLPTR));
        actionfile->setText(QApplication::translate("video", "file", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionfile->setToolTip(QApplication::translate("video", "open a file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pb_importervid->setText(QApplication::translate("video", "Importer", Q_NULLPTR));
        pb_stop->setText(QApplication::translate("video", "Stop", Q_NULLPTR));
        pb_play->setText(QApplication::translate("video", "play", Q_NULLPTR));
        pb_pause->setText(QApplication::translate("video", "Pause", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class video: public Ui_video {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEO_H
