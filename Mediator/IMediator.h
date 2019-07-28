#ifndef IMEDIATOR_H
#define IMEDIATOR_H

class IColleague;

//中介者接口
class IMediator
{
public:
    //注册参与者
    virtual void registerCooleague ( IColleague *colleague ) = 0;

    //注销参与者
    virtual void unregisterCooleague ( IColleague *colleague ) = 0;

    //广播消息
    virtual void distributeMessage ( const IColleague *colleague, const std::string &message ) const = 0;
};

#endif // IMEDIATOR_H
