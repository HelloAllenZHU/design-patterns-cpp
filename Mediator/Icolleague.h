#ifndef ICOLLEAGUE_H
#define ICOLLEAGUE_H

#include <iostream>

class IMediator;

//同事接口
class IColleague
{
public:
    //发送消息
    virtual void sendMessage ( const IMediator *mediator, const std::string &message ) = 0;

    //接收消息
    virtual void recvMessage ( const IColleague *colleague, const std::string &message ) const = 0;

    //返回名称
    virtual std::string getName () const = 0;
};

#endif // ICOLLEAGUE_H
