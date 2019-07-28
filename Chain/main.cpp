#include <iostream>
#include "Handler.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;

    IHandler *pHandlerA = new HandlerA();
    IHandler *pHandlerB = new HandlerB();
    IHandler *pHandlerC = new HandlerC();

    pHandlerA->setSuccessor( pHandlerB );
    pHandlerB->setSuccessor( pHandlerC );

    pHandlerA->handle( 8 );
    pHandlerA->handle( 88 );
    pHandlerA->handle( 888 );

    delete pHandlerC;
    delete pHandlerB;
    delete pHandlerA;
    return 0;
}
