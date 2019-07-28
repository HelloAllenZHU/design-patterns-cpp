TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Mediator.cpp \
    Colleague.cpp

HEADERS += \
    IMediator.h \
    Mediator.h \
    Colleague.h \
    IColleague.h
