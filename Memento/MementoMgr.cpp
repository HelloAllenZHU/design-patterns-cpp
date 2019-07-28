#include <iostream>
#include "Game.h"
#include "Memento.h"
#include "MementoMgr.h"

//构造
MementoMgr::MementoMgr( Game *pGame )
{
    m_pGame = pGame;
    m_pMemento = new Memento();
}

//析构
MementoMgr::~MementoMgr()
{
    delete m_pMemento;
    m_pMemento = NULL;
}

//写入数据到备忘录数据
void MementoMgr::writeData()
{
    m_pMemento->setData( m_pGame->getData() );
}

//从备忘录中读取数据
void MementoMgr::readData()
{
    m_pGame->setData( m_pMemento->getData() );
}
