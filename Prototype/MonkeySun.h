#ifndef MONKEYSUN_H
#define MONKEYSUN_H

#include "IMonkey.h"
#include <string>

//孙悟空类
class MonkeySun : public IMonkey
{
public:
    //构造
    MonkeySun( const std::string &name, const std::string &age );

    //复制构造
    MonkeySun( const MonkeySun &monkey );

    //析构
    ~MonkeySun();

    //克隆
    IMonkey * clone();

    //dosomething
    void dosomething();

private:
    //属性-姓名
    std::string m_str_name;

    //属性-年龄
    std::string m_str_age;
};

#endif // MONKEYSUN_H
