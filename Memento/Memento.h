#ifndef MEMENTO_H
#define MEMENTO_H

//备忘数据
class Memento
{
public:
    //构造
    Memento();

    //析构
    ~Memento();

    //设置数据
    void setData( int person );

    //获取数据
    int getData();

private:
    int m_nPerson;  //当前人数
};

#endif // MEMENTO_H
