#-------------------------------------------------
#
# Project created by QtCreator 2017-01-02T19:33:58
#
#-------------------------------------------------

QT       += core gui opengl printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += opengl widgets

TARGET = pend2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    annotation.cpp \
    phyzxmodel.cpp \
    globj.cpp \
    scene.cpp \
    qcustomplot.cpp \
    graphs.cpp

HEADERS  += mainwindow.h \
    annotation.h \
    phyzxmodel.h \
    globj.h \
    scene.h \
    qcustomplot.h \
    graphs.h

FORMS    += mainwindow.ui \
    annotation.ui \
    graphs.ui

RESOURCES += \
    ares.qrc

LIBS += opengl32.lib
