TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        ../../../work/code/NiceClassStand/Data/ClassStand.cpp \
        main.cpp

HEADERS += \
    ../../../work/code/NiceClassStand/Data/ClassStand.h \
    Factory.h \
    Product.h
