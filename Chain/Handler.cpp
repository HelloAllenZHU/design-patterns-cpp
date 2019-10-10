#include <iostream>
#include "Handler.h"

//--------------------------------------HandlerA
//构造
HandlerA::HandlerA()
{
    m_pHandler = nullptr;
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
void HandlerA::handle( std::string product )
{
    if ( product == "Apple" )
        std::cout << "执行" << product << "的优惠折扣" << std::endl;
    else
        m_pHandler->handle( product );
}

//--------------------------------------HandlerB
//构造
HandlerB::HandlerB()
{
    m_pHandler = nullptr;
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
void HandlerB::handle( std::string product )
{
    if ( product == "Orange" )
        std::cout << "执行" << product << "的优惠折扣" << std::endl;
    else
        m_pHandler->handle( product );
}

//--------------------------------------HandlerC
//构造
HandlerC::HandlerC()
{
    m_pHandler = nullptr;
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
void HandlerC::handle( std::string product )
{
    if ( product == "Banana" )
        std::cout << "执行" << product << "的优惠折扣" << std::endl;
    else
        m_pHandler->handle( product );
}
