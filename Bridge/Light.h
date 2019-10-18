#ifndef LIGHT_H
#define LIGHT_H

#include <iostream>

//定义灯饰接口
class ILight
{
public:
    //开灯
    virtual void turnOn() = 0;

    //关灯
    virtual void turnOff() = 0;
};

//原型的灯饰
class CircularLight : public ILight
{
public:
    virtual void turnOn() {
        std::cout << " Circular light turn on" <<std::endl;
    }

    virtual void turnOff() {
        std::cout << " Circular light turn off" <<std::endl;
    }
};

//方形的灯饰
class RectangleLight : public ILight
{
public:
    virtual void turnOn() {
        std::cout << " Rectangle light turn on" <<std::endl;
    }

    virtual void turnOff() {
        std::cout << " Rectangle light turn off" <<std::endl;
    }
};

#endif // LIGHT_H
