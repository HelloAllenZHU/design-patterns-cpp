#ifndef SUBJECT_H
#define SUBJECT_H

#include <iostream>
#include <list>
#include "Observer.h"

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

//主题类
class Subject : public ISubject
{
public:
    //构造
    Subject()
    {
        m_fPrice = 10.0;
    }

    //析构
    ~Subject()
    {

    }

    //注册观察者
    void Attach( IObserver *observer )
    {
        m_list_observer.push_back( observer );
    }

    //注销观察者
    void Detach( IObserver *observer )
    {
        m_list_observer.remove( observer );
    }

    //通知观察者
    void Notify()
    {
        std::list<IObserver *>::iterator it = m_list_observer.begin();
        while ( it != m_list_observer.end() )
        {
            ( *it )->Update( m_fPrice );
            ++it;
        }
    }

    //设置价格
    void SetPrice( float price )
    {
        m_fPrice = price;
    }

private:
    //观察者列表
    std::list<IObserver *>  m_list_observer;

    //价格
    float                   m_fPrice;
};

#endif // SUBJECT_H
