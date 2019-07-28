TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Observer.cpp \
    Subject.cpp

HEADERS += \
    ISubject.h \
    IObserver.h \
    Subject.h \
    Observer.h
