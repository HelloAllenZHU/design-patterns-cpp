#include "Game.h"

//构造
Game::Game()
{
    m_nPerson= 0;
}

//析构
Game::~Game()
{

}

//设置数据
void Game::setData( int person )
{
    m_nPerson = person;
}

//获取数据
int Game::getData()
{
    return m_nPerson;
}

//开始游戏
void Game::startGame()
{
    ;
}

//暂停游戏
void Game::pauseGame()
{
    ;
}

//停止游戏
void Game::stopGame()
{
    ;
}
