/*
 * 在不必改变原类文件和使用继承的情况下，动态地扩展一个对象的功能。它是通过创建一个包装对象，也就是装饰来包裹真实的对象。
 * 示例：创建一个手机对象，然后给它装饰上漂亮的外壳、手机绳、贴膜
 */

#include <iostream>
#include "ishape.h"

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
