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

SOURCES += main.cpp\
        mainwindow.cpp \
    dialogforbmu.cpp

HEADERS  += mainwindow.h \
    dialogforbmu.h \
    usb2can.h \
    usb_device.h

FORMS    += mainwindow.ui \
    dialogforbmu.ui

RESOURCES += \
    image.qrc
