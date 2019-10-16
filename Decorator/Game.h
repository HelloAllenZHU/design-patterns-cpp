#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>

//游戏接口
class IGame
{
public:
    virtual void Name() = 0;
};

//卡五星
class GameKWX : public IGame
{
public:
    GameKWX() {

    };

    ~GameKWX() {

    }

    virtual void Name() {
        std::cout << "KWX type..." << std::endl;
    }
};

//斗地主
class GameDDZ : public IGame
{
public:
    GameDDZ() {

    };

    ~GameDDZ() {

    }

    virtual void Name() {
        std::cout << "DDZ type..." << std::endl;
    }
};

#endif // GAME_H
