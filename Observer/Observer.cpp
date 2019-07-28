#include <iostream>
#include "Observer.h"

using namespace std;

//构造
Observer::Observer( std::string name )
{
    m_strName = name;
}

//析构
Observer::~Observer()
{
    ;
}

//更新
void Observer::Update( float price )
{
    std::cout << m_strName + " price is " << price << std::endl;
}
