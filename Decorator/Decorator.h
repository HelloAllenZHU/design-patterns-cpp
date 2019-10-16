#ifndef DECORATOR_H
#define DECORATOR_H

#include "Game.h"

//游戏装饰器
class GameDecorator : public IGame
{
public:
    //构造
    GameDecorator( IGame *game ) {
        m_pGame = game;
    }

    //析构
    ~GameDecorator() {

    }

    //绘图
    virtual void Name() {
        m_pGame->Name();
    }

private:
    //要装饰的游戏
    IGame  *m_pGame;
};

//房卡游戏装饰器
class FangGameDecorator : public GameDecorator
{
public:
    //构造
    FangGameDecorator( IGame *game ) : GameDecorator( game ) {

    }

    //析构
    ~FangGameDecorator() {

    }

    //绘图
    virtual void Name() {
        std::cout << "Fang ";
        GameDecorator::Name();
    }
};

//金币游戏装饰器
class GoldGameDecorator : public GameDecorator
{
public:
    //构造
    GoldGameDecorator( IGame *game ) : GameDecorator( game ) {

    }

    //析构
    ~GoldGameDecorator() {

    }

    //绘图
    virtual void Name() {
        std::cout << "Gold ";
        GameDecorator::Name();
    }
};

#endif // DECORATOR_H
