#include <iostream>
#include "Colleague.h"

//构造
Colleague::Colleague( const std::string &name )
{
    m_str_name = name;
}

//析构
Colleague::~Colleague()
{

}

//发送消息
void Colleague::sendMessage ( const IMediator *mediator, const std::string &message )
{
    if ( mediator != nullptr )
        mediator->distributeMessage( this, message );
}

//接收消息
void Colleague::recvMessage ( const IColleague *colleague, const std::string &message ) const
{
    std::cout << getName() << " recv message from " << colleague->getName() << " : " << message << std::endl;
}

//返回名称
std::string Colleague::getName () const
{
    return m_str_name;
}
