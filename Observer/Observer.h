#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>

//观察者接口
class IObserver
{
public:
    //更新
    virtual void Update( float price ) = 0;
};

//观察者类
class Observer : public IObserver
{
public:
    //构造
    Observer( std::string name ) {
        m_strName = name;
    }

    //析构
    ~Observer() {

    }

    //更新
    void Update( float price ) {
        std::cout << m_strName + " price is " << price << std::endl;
    }

private:
    //名称
    std::string     m_strName;
};

#endif // OBSERVER_H
