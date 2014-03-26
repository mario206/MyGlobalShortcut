#-------------------------------------------------
#
# Project created by QtCreator 2014-03-27T06:01:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    MyWinEventFilter.cpp \
    MyGlobalShortCut.cpp

HEADERS  += mainwindow.h \
    MyWinEventFilter.h \
    MyGlobalShortCut.h

FORMS    += mainwindow.ui
