
#include "Memento.h"

//构造
Memento::Memento()
{
    m_nPerson = 0;
}

//析构
Memento::~Memento()
{

}

//设置数据
void Memento::setData( int person )
{
    m_nPerson = person;
}

//获取数据
int Memento::getData()
{
    return m_nPerson;
}
