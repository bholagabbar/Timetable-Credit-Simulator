#-------------------------------------------------
#
# Project created by QtCreator 2015-04-19T17:12:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Project1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp \
    student_tt.cpp

HEADERS  += mainwindow.h \
    dialog.h \
    student_tt.h

FORMS    += mainwindow.ui \
    dialog.ui \
    student_tt.ui

RESOURCES += \
    back1.qrc \
    imag1.qrc \
    light.qrc \
    fbl.qrc \
    fw1.qrc \
    vit.qrc \
    icon.qrc
win32:RC_ICONS +="C:\Users\User\Documents\Project1\icon.ico"
