#-------------------------------------------------
#
# Project created by QtCreator 2020-09-02T19:22:06
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GestArt
TEMPLATE = app

SOURCES += main.cpp\
    gestart.cpp \
        mainwindow.cpp \
    modif.cpp

HEADERS  += mainwindow.h \
    gestart.h \
    modif.h

FORMS    += mainwindow.ui \
    modif.ui

RESOURCES += \
    Images.qrc
