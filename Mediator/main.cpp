/*
 * 用一个中介对象来封装n个对象之间的交互，使各对象不需要显式地相互引用，从而使其耦合松散，而且可以独立地改变它们之间的交互。
 * 示例：用户A发了一个朋友圈，然后微信服务器(中介者)会同步更新到其所有好友的朋友圈；同理，其他用户发朋友圈也是如此。
 */

#include <iostream>
#include "Mediator.h"
#include "Colleague.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;

    IMediator  *pMediator  = new Mediator();

    IColleague *pColleague = new Colleague( "房东" );
    IColleague *pColleague1= new Colleague( "张三" );
    IColleague *pColleague2= new Colleague( "李四" );

    pMediator->registerCooleague( pColleague );
    pMediator->registerCooleague( pColleague1 );
    pMediator->registerCooleague( pColleague2 );
    pColleague->sendMessage( pMediator, "交房租了！" );

    delete pMediator;
    delete pColleague;
    delete pColleague1;
    delete pColleague2;
    return 0;
}
