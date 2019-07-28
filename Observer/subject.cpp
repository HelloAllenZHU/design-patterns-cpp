#include <iostream>
#include <list>
#include "Subject.h"
#include "Observer.h"

using namespace std;

//构造
Subject::Subject()
{
    m_fPrice = 10.0;
}

//析构
Subject::~Subject()
{

}

//注册观察者
void Subject::Attach( IObserver *observer )
{
    m_list_observer.push_back( observer );
}

//注销观察者
void Subject::Detach( IObserver *observer )
{
    m_list_observer.remove( observer );
}

//通知观察者
void Subject::Notify()
{
    std::list<IObserver *>::iterator it = m_list_observer.begin();
    while ( it != m_list_observer.end() )
    {
        ( *it )->Update( m_fPrice );
        ++it;
    }
}

//设置价格
void Subject::SetPrice( float price )
{
    m_fPrice = price;
}
