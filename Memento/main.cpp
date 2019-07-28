#include <iostream>
#include "Game.h"
#include "MementoMgr.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
    Game        *pGame    = new Game();
    MementoMgr  *pMemento = new MementoMgr( pGame );

    std::cout << "Game->getData() = " << pGame->getData() << std::endl;
    pGame->setData( 1 );
    pMemento->writeData();
    std::cout << "Game->getData() = " << pGame->getData() << std::endl;
    pGame->setData( 8 );
    std::cout << "Game->getData() = " << pGame->getData() << std::endl;
    pMemento->readData();
    std::cout << "Game->getData() = " << pGame->getData() << std::endl;

    delete pMemento;
    delete pGame;
    return 0;
}
