#ifndef OBSERVER_H
#define OBSERVER_H

#include "IObserver.h"

//观察者类
class Observer : public IObserver
{
public:
    //构造
    Observer( std::string name );

    //析构
    ~Observer();

    //更新
    void Update( float price );

private:
    //名称
    std::string     m_strName;
};

#endif // OBSERVER_H
