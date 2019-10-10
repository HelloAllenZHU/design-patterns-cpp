/*
 * 在不破坏封装性的前提下，捕获一个对象的内部状态，并在该对象之外保存这个状态，以后就可将该对象恢复到保存的状态。
 * 例如：1、将游戏当前进度保存到硬盘，下次玩的时候，直接从硬盘读取上一次的游戏数据。
 * 2、文本编辑器，每一步操作都写入历史记录，然后可以一路撤销，回到上一次操作的状态。
 */

#include <iostream>
#include "Game.h"
#include "MementoMgr.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
    Game        *pGame    = new Game();
    MementoMgr  *pMemento = new MementoMgr( pGame );

    std::cout << "1 Game->getData() = " << pGame->getTime() << std::endl;
    pGame->setTime( "2008-01-01" );
    pMemento->writeData();
    std::cout << "2 Game->getData() = " << pGame->getTime() << std::endl;

    pGame->setTime( "2009-12-31" );
    std::cout << "3 Game->getData() = " << pGame->getTime() << std::endl;

    pMemento->readData();
    std::cout << "4 Game->getData() = " << pGame->getTime() << std::endl;

    delete pMemento;
    delete pGame;
    return 0;
}
