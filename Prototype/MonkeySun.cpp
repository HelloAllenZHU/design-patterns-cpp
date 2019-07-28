#include <iostream>
#include "MonkeySun.h"

//构造
MonkeySun::MonkeySun( const std::string &name, const std::string &age )
{
    m_str_name = name;
    m_str_age  = age;
}

//复制构造
MonkeySun::MonkeySun( const MonkeySun &monkey )
{
    m_str_name = monkey.m_str_name;
    m_str_age  = monkey.m_str_age;
}

//析构
MonkeySun::~MonkeySun()
{

}

//克隆
IMonkey * MonkeySun::clone()
{
    return new MonkeySun( *this );  //调用拷贝构造函数
}

//dosomething
void MonkeySun::dosomething()
{
    std::cout << m_str_name + " dosomething..." << std::endl;
}
