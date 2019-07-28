#include <iostream>
#include "Handler.h"

//--------------------------------------HandlerA
//构造
HandlerA::HandlerA()
{
    m_pHandler = NULL;
}

//析构
HandlerA::~HandlerA()
{
    ;
}

//设置继任者
void HandlerA::setSuccessor( IHandler *successor )
{
    m_pHandler = successor;
}

//处理
void HandlerA::handle( int price )
{
    if ( price <= 10 )
        std::cout << "A 处理 " << price << std::endl;
    else
        m_pHandler->handle( price );
}

//--------------------------------------HandlerB
//构造
HandlerB::HandlerB()
{
    m_pHandler = NULL;
}

//析构
HandlerB::~HandlerB()
{
    ;
}

//设置继任者
void HandlerB::setSuccessor( IHandler *successor )
{
    m_pHandler = successor;
}

//处理
void HandlerB::handle( int price )
{
    if ( price <= 100 )
        std::cout << "B 处理 " << price  << std::endl;
    else
        m_pHandler->handle( price );
}

//--------------------------------------HandlerC
//构造
HandlerC::HandlerC()
{
    m_pHandler = NULL;
}

//析构
HandlerC::~HandlerC()
{
    ;
}

//设置继任者
void HandlerC::setSuccessor( IHandler *successor )
{
    m_pHandler = successor;
}

//处理
void HandlerC::handle( int price )
{
    if ( price <= 1000 )
        std::cout << "C 处理 " << price  << std::endl;
    else
        m_pHandler->handle( price );
}
