#ifndef MEMENTOMGR_H
#define MEMENTOMGR_H

class Game;
class Memento;

//备忘录数据管理类
class MementoMgr
{
public:
    //构造
    MementoMgr( Game *pGame );

    //析构
    ~MementoMgr();

    //写入数据到备忘录数据
    void writeData();

    //从备忘录中读取数据
    void readData();

private:
    //Game对象
    Game    *   m_pGame;

    //备忘录数据对象
    Memento *   m_pMemento;
};

#endif // MEMENTOMGR_H
