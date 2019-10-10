/*
 * 解除请求的发送者和接收者之间的耦合，使链上的多个对象都有机会处理这个请求。
 * 将这些对象连成一条链，并沿着这条链传递请求，直到有一个对象处理它。
 * 示例：客户购买商品，每种商品都有各自的优惠折扣，将这些折扣顺序包装成一条链，
 * 当用户购买了A商品时，执行A商品的优惠；购买了B商品时，执行B商品的优惠。
 */

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

    pHandlerA->handle( "Apple" );   //购买Apple
    pHandlerA->handle( "Orange" );  //购买Orange
    pHandlerA->handle( "Banana" );  //购买Banana

    delete pHandlerC;
    delete pHandlerB;
    delete pHandlerA;
    return 0;
}
