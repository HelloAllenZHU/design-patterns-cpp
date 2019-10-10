
#include "Memento.h"

//构造
Memento::Memento()
{

}

//析构
Memento::~Memento()
{

}

//设置数据
void Memento::setTime( std::string time )
{
    m_strTime = time;
}

//获取数据
std::string Memento::getTime()
{
    return m_strTime;
}
