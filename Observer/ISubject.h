#ifndef ISUBJECT_H
#define ISUBJECT_H

class IObserver;

//主题接口
class ISubject
{
public:
    //注册观察者
    virtual void Attach( IObserver * ) = 0;

    //注销观察者
    virtual void Detach( IObserver * ) = 0;

    //通知观察者
    virtual void Notify() = 0;
};

#endif // ISUBJECT_H
