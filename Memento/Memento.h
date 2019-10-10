#ifndef MEMENTO_H
#define MEMENTO_H

#include <iostream>

//备忘数据(要保存、恢复的数据)
class Memento
{
public:
    //构造
    Memento();

    //析构
    ~Memento();

    //设置数据
    void setTime( std::string time );

    //获取数据
    std::string getTime();

private:
    std::string m_strTime;  //时间
};

#endif // MEMENTO_H
