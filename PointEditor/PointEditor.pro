#-------------------------------------------------
#
# Project created by QtCreator 2020-03-27T11:24:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PointEditor
TEMPLATE = app


SOURCES += main.cpp\
    MainWindow.cpp \
    PointItem.cpp \
    PointsForm.cpp \
    Points.cpp \
    PointsModel.cpp \
    Scene.cpp

HEADERS  += MainWindow.h \
    PointItem.h \
    PointsForm.h \
    Points.h \
    PointsModel.h \
    Scene.h

FORMS    += MainWindow.ui \
    PointsForm.ui
