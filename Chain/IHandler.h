#ifndef IHANDLER_H
#define IHANDLER_H

#include <iostream>

//处理者接口
class IHandler
{
public:
    //设置继任者
    virtual void setSuccessor( IHandler *successor ) = 0;

    //处理请求
    virtual void handle( std::string product ) = 0;
};

#endif // IHANDLER_H
