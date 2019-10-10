#include "Game.h"

//构造
Game::Game()
{
    m_strTime = "2000-01-01";
}

//析构
Game::~Game()
{

}

//设置数据
void Game::setTime( std::string time )
{
    m_strTime = time;
}

//获取数据
std::string Game::getTime()
{
    return m_strTime;
}
