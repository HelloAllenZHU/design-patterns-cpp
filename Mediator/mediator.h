#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <list>
#include "IMediator.h"
#include "IColleague.h"

//中介者类
class Mediator : public IMediator
{
public:
    //注册参与者
    virtual void registerCooleague ( IColleague *colleague );

    //注销参与者
    virtual void unregisterCooleague ( IColleague *colleague );

    //广播消息
    virtual void distributeMessage ( const IColleague *colleague, const std::string &message ) const;

public:
    //构造
    Mediator();

    //析构
    ~Mediator();

private:
    //保存所有的对象
    std::list<IColleague *> m_list_colleague;
};

#endif // MEDIATOR_H
