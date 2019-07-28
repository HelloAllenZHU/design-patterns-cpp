#ifndef COLLEAGUE_H
#define COLLEAGUE_H

#include <string>
#include "IColleague.h"
#include "IMediator.h"

class Colleague : public IColleague
{
public:
    //发送消息
    void sendMessage ( const IMediator *mediator, const std::string &message );

    //接收消息
    void recvMessage ( const IColleague *colleague, const std::string &message ) const;

    //返回名称
    std::string getName () const;

public:
    //构造
    Colleague( const std::string &name );

    //析构
    ~Colleague();

private:
    //名称
    std::string m_str_name;
};

#endif // COLLEAGUE_H
