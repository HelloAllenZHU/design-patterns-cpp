#ifndef GAME_H
#define GAME_H

//游戏类(需要保存、恢复状态)
class Game
{
public:
    //构造
    Game();

    //析构
    ~Game();

    //设置数据
    void setData( int person );

    //获取数据
    int getData();

    //开始游戏
    void startGame();

    //暂停游戏
    void pauseGame();

    //停止游戏
    void stopGame();

private:
    int m_nPerson;  //当前人数
};

#endif // GAME_H
