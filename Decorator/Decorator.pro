TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    ShapeRect.cpp \
    ShapeCircle.cpp \
    RedShapeDecorator.cpp

HEADERS += \
    IShape.h \
    ShapeRect.h \
    ShapeCircle.h \
    RedShapeDecorator.h \
    ShapeDecorator.h
