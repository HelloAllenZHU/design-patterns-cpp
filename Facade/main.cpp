#include <iostream>
#include "Av.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;

    IAv *pFacade = new Av();

    pFacade->init();
    pFacade->startVideo();
    pFacade->startAudio();
    pFacade->stopVideo();
    pFacade->stopAudio();

    delete pFacade;
    return 0;
}
