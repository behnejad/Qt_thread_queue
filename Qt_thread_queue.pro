#-------------------------------------------------
#
# Project created by QtCreator 2013-06-15T21:22:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Qt_thread_queue
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    fibthread.cpp

HEADERS  += dialog.h \
    fibthread.h

FORMS    += dialog.ui
