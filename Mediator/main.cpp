#include <iostream>
#include "Mediator.h"
#include "Colleague.h"

using namespace std;

int main(int argc, char *argv[])
{
    IMediator  *pMediator  = new Mediator();

    IColleague *pColleague = new Colleague( "房东" );
    IColleague *pColleague1= new Colleague( "朱政" );
    IColleague *pColleague2= new Colleague( "刘洋" );

    pMediator->registerCooleague( pColleague );
    pMediator->registerCooleague( pColleague1 );
    pMediator->registerCooleague( pColleague2 );
    pColleague->sendMessage( pMediator, "交房租啦!" );

    delete pMediator;
    delete pColleague;
    delete pColleague1;
    delete pColleague2;

    cout << "Hello World!" << endl;
    return 0;
}
