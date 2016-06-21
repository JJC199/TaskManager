#-------------------------------------------------
#
# Project created by QtCreator 2016-06-20T14:48:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TheDadTaskManager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    task.cpp \
    work_task.cpp \
    school_task.cpp \
    otheractivities_task.cpp \
    home_task.cpp \
    newtask_form.cpp \
    taskcollection.cpp

HEADERS  += mainwindow.h \
    task.h \
    work_task.h \
    school_task.h \
    otheractivities_task.h \
    home_task.h \
    newtask_form.h \
    taskcollection.h

FORMS    += mainwindow.ui \
    newtask_form.ui
