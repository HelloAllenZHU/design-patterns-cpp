/*
 * 当某对象的状态/数据发生变化时，及时通知与之相关的对象进行更新。
 * 例如：用户修改昵称之后，UI上所有与昵称有关的窗口都要动态更新。
 * 将公共状态、数据封装成Subject，其他需要用到这些状态、数据的对象就按需注册、注销监听事件。
 */

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
    return 0;
}
