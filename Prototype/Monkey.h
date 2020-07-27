#ifndef MONKEY_H
#define MONKEY_H

#include <iostream>
#include <string>

//猴子接口
class IMonkey
{
public:
    //克隆
    virtual IMonkey * clone() = 0;

    //dosomething
    virtual void dosomething() = 0;
};


//孙悟空类
class MonkeySun : public IMonkey
{
public:
    //构造
    MonkeySun( const std::string &name, const std::string &age ) {
        m_str_name = name;
        m_str_age  = age;
    }
    //复制构造
    MonkeySun( const MonkeySun &monkey ) {
        m_str_name = monkey.m_str_name;
        m_str_age  = monkey.m_str_age;
    }

    //析构
    ~MonkeySun() {

    }

    //克隆
    IMonkey * clone() {
        return new MonkeySun( *this );  //调用拷贝构造函数
    }

    //dosomething
    void dosomething() {
        std::cout << m_str_name + " dosomething..." << std::endl;
    }

private:
    //属性-姓名
    std::string m_str_name;

    //属性-年龄
    std::string m_str_age;
};

#endif // MONKEY_H
