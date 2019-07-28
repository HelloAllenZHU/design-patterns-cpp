TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Game.cpp \
    Memento.cpp \
    MementoMgr.cpp

HEADERS += \
    Game.h \
    Memento.h \
    MementoMgr.h
