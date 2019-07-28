#ifndef ISTATE_H
#define ISTATE_H

#include <iostream>
#include "IState.h"

class Context;

//状态接口
class IState
{
public:
    //dosomething
    virtual void dosomething() = 0;
};

//红灯状态
class RedState : public IState
{
public:
    RedState() {}
    ~RedState() {}

    virtual void dosomething() {
        std::cout << "RedState dosomething..." << std::endl;
    }
};

//黄灯状态
class YellowState : public IState
{
public:
    YellowState() {}
    ~YellowState() {}

    virtual void dosomething() {
        std::cout << "YellowState dosomething..." << std::endl;
    }
};

//绿灯状态
class GreenState : public IState
{
public:
    GreenState() {}
    ~GreenState() {}

    virtual void dosomething() {
        std::cout << "GreenState dosomething..." << std::endl;
    }
};

#endif // ISTATE_H
