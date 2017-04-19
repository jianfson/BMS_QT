#-------------------------------------------------
#
# Project created by QtCreator 2017-03-13T17:54:17
#
#-------------------------------------------------

QT       += core gui

TARGET = BMS
TEMPLATE = app

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

win32:LIBS += -L$$PWD/lib/win32/ -lUSB2XXX

win32:LIBS += -L$$PWD/lib/win32/ -lControlCAN

SOURCES += main.cpp\
        mainwindow.cpp \
    dialogforbmu.cpp \
    dialogforparameter.cpp

HEADERS  += mainwindow.h \
    dialogforbmu.h \
    usb2can.h \
    usb_device.h \
    ControlCAN.h \
    dialogforparameter.h

FORMS    += mainwindow.ui \
    dialogforbmu.ui \
    dialogforparameter.ui

RESOURCES += \
    image.qrc
