#include <iostream>
#include "MonkeySun.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;

    //创建孙悟空
    IMonkey *pMonkey = new MonkeySun( "sun", "20" );

    //克隆孙悟空
    IMonkey *pMonkey1= pMonkey->clone();
    IMonkey *pMonkey2= pMonkey->clone();

    pMonkey1->dosomething();
    pMonkey2->dosomething();

    delete pMonkey1;
    delete pMonkey2;
    return 0;
}
