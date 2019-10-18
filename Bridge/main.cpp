/*
 * 将一个对象的抽象部分和实现部分进行分离，使其双方都可以独立地变化。
 * 例如：一套灯光系统，简单来说包含开关和灯。如果开关坏了可以换个不同的开关；如果灯坏了可能换个不同的灯。
 * 应用场景：一套系统有2个及以上的变化因素，各种因素相互独立变化。
 */

#include <iostream>
#include "Light.h"
#include "Switch.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;

    ILight *pCircular  = new CircularLight;
    ILight *pRectangle = new RectangleLight;

    ISwitch *pWhite = new WhiteSwitch( pCircular );
    ISwitch *pBlack = new BlackSwitch( pRectangle );

    pWhite->turnOn();
    pWhite->turnOff();

    pBlack->turnOn();
    pBlack->turnOff();

    delete pCircular;
    delete pRectangle;
    delete pWhite;
    delete pBlack;
    return 0;
}
