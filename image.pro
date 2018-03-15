#-------------------------------------------------
#
# Project created by QtCreator 2015-12-25T21:21:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = image
TEMPLATE = app


SOURCES += main.cpp\
        imagewindow.cpp \
    single.cpp \
    complex.cpp \
    singleton.cpp \
    image4.cpp \
    complexlist.cpp


HEADERS  += imagewindow.h \
    single.h \
    complex.h \
    singleton.h \
    image4.h \
    complexlist.h


FORMS    += imagewindow.ui \
    single.ui \
    complex.ui \
    complexlist.ui
