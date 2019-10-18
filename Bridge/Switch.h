#ifndef SWITCH_H
#define SWITCH_H

#include <iostream>
#include "Light.h"


//定义开关接口
class ISwitch
{
public:
    //构造
    ISwitch( ILight * light ) {
        pLight = light;
    }

    //析构
    virtual ~ISwitch() {
        ;
    }

    //开灯
    virtual void turnOn() = 0;

    //关灯
    virtual void turnOff() = 0;

protected:
    ILight *pLight;
};

//白色的开关
class WhiteSwitch : public ISwitch
{
public:
    WhiteSwitch( ILight *pLight ) : ISwitch( pLight ) {
        ;
    }

    virtual void turnOn() {
        std::cout << "White switch turn on: ";
        pLight->turnOn();
    }

    virtual void turnOff() {
        std::cout << "White switch turn off: ";
        pLight->turnOff();
    }
};

//黑色的开关
class BlackSwitch : public ISwitch
{
public:
    BlackSwitch( ILight *pLight ) : ISwitch( pLight ) {
        ;
    }

    virtual void turnOn() {
        std::cout << "Black switch turn on: ";
        pLight->turnOn();
    }

    virtual void turnOff() {
        std::cout << "Black switch turn off: ";
        pLight->turnOff();
    }
};

#endif // SWITCH_H
