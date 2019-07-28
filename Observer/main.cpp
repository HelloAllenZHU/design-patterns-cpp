#include <iostream>
#include <list>
#include "Subject.h"
#include "Observer.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;

    //创建主题和观察者
    Subject     *pSubject   = new Subject();
    IObserver   *pObserver1 = new Observer( "Ma" );
    IObserver   *pObserver2 = new Observer( "Le" );

    //注册观察者
    pSubject->Attach( pObserver1 );
    pSubject->Attach( pObserver2 );

    //更改主题的数据
    pSubject->SetPrice( 12.5 );
    pSubject->Notify();

    //注销观察者
    pSubject->Detach( pObserver2 );

    //更改主题的数据
    pSubject->SetPrice( 15.0 );
    pSubject->Notify();

    //释放
    delete pSubject;
    delete pObserver1;
    delete pObserver2;
    pSubject   = NULL;
    pObserver1 = NULL;
    pObserver2 = NULL;

    return 0;
}
