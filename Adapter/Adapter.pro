TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    SDCard.cpp \
    CardReader.cpp

HEADERS += \
    IUsb.h \
    SDCard.h \
    CardReader.h
