#ifndef HANDLER_H
#define HANDLER_H

#include "IHandler.h"

//处理者A实现
class HandlerA : public IHandler
{
public:
    //构造
    HandlerA();

    //析构
    ~HandlerA();

    //设置继任者
    void setSuccessor( IHandler *successor );

    //处理
    void handle( std::string product );

private:
    //继任者
    IHandler *m_pHandler;
};

//处理者B实现
class HandlerB : public IHandler
{
public:
    //构造
    HandlerB();

    //析构
    ~HandlerB();

    //设置继任者
    void setSuccessor( IHandler *successor );

    //处理
    void handle( std::string product );

private:
    //继任者
    IHandler *m_pHandler;
};

//处理者C实现
class HandlerC : public IHandler
{
public:
    //构造
    HandlerC();

    //析构
    ~HandlerC();

    //设置继任者
    void setSuccessor( IHandler *successor );

    //处理
    void handle( std::string product );

private:
    //继任者
    IHandler *m_pHandler;
};

#endif // HANDLER_H
