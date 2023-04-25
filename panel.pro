QT       += network printsupport
QT       += core gui sql multimedia multimediawidgets widgets
QT +=serialport
QT += network
QT += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += staticlib
QT += networkauth
include(qoauth.pri)



# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    arduino.cpp \
    camera.cpp \
    connection.cpp \
    employe.cpp \
    formulaire.cpp \
    main.cpp \
    mainwindow.cpp \
    oauth2service.cpp \
    offre.cpp \
    profil.cpp \
    qcustomplot.cpp \
    serviceagentwindow.cpp \
    smtp.cpp \
    statistique.cpp \
    video.cpp

HEADERS += \
    arduino.h \
    camera.h \
    connection.h \
    employe.h \
    formulaire.h \
    mainwindow.h \
    oauth2service.h \
    offre.h \
    profil.h \
    qcustomplot.h \
    serviceagentwindow.h \
    smtp.h \
    statistique.h \
    video.h

FORMS += \
    camera.ui \
    formulaire.ui \
    mainwindow.ui \
    profil.ui \
    serviceagentwindow.ui \
    statistique.ui \
    video.ui
QMAKE_CXXFLAGS += -std=gnu++14
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    media.qrc

DISTFILES +=
