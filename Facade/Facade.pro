TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Video.cpp \
    Audio.cpp \
    Av.cpp

HEADERS += \
    Video.h \
    Audio.h \
    Av.h \
    IAv.h
