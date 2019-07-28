#ifndef SUBJECT_H
#define SUBJECT_H

#include "ISubject.h"

//主题类
class Subject : public ISubject
{
public:
    //构造
    Subject();

    //析构
    ~Subject();

    //注册观察者
    void Attach( IObserver * );

    //注销观察者
    void Detach( IObserver * );

    //通知观察者
    void Notify();

    //设置价格
    void SetPrice( float price );

private:
    //观察者列表
    std::list<IObserver *>  m_list_observer;

    //价格
    float                   m_fPrice;
};

#endif // SUBJECT_H
