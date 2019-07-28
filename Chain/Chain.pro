TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Handler.cpp

HEADERS += \
    IHandler.h \
    Handler.h
