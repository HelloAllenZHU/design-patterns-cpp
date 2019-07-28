#include <iostream>
#include "ShapeCircle.h"
#include "ShapeRect.h"
#include "RedShapeDecorator.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;

    IShape *pRect      = new ShapeRect();                   //矩形
    IShape *pCircle    = new ShapeCircle();                 //圆形
    IShape *pRedRect   = new RedShapeDecorator( pRect );    //给矩形装饰红色
    IShape *pRedCircle = new RedShapeDecorator( pCircle );  //给圆形装饰红色

    pRect->draw();
    pCircle->draw();
    pRedRect->draw();
    pRedCircle->draw();

    delete pRect;
    delete pCircle;
    delete pRedRect;
    delete pRedCircle;
    return 0;
}
