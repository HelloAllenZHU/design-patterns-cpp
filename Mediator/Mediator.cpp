#include <iostream>
#include "Mediator.h"

//构造
Mediator::Mediator()
{

}

//析构
Mediator::~Mediator()
{

}

//注册参与者
void Mediator::registerCooleague ( IColleague *colleague )
{
    m_list_colleague.emplace_back( colleague );
}

//注销参与者
void Mediator::unregisterCooleague ( IColleague *colleague )
{
    ;
}

//广播消息
void Mediator::distributeMessage ( const IColleague *colleague, const std::string &message ) const
{
    for ( const IColleague *col : m_list_colleague )
    {
        //IColleague *px = new Colleague();
        if ( col != colleague )
            col->recvMessage( colleague, message );
    }
}
