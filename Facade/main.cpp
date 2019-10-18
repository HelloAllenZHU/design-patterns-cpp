/*
 * 就是对一些功能的封装，使其便于使用。
 * 例如：封装一个音视频库。
 */
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
