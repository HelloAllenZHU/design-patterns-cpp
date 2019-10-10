#ifndef GAME_H
#define GAME_H

#include <iostream>

//游戏类(需要保存、恢复状态)
class Game
{
public:
    //构造
    Game();

    //析构
    ~Game();

    //设置数据
    void setTime( std::string time );

    //获取数据
    std::string getTime();

private:
    std::string m_strTime;  //时间
};

#endif // GAME_H
