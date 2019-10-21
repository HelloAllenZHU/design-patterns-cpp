#include <iostream>
#include "Singleton.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;

    //Singleton *pSingleton = Singleton::GetInstance();
    Singleton::GetInstance()->DoSomething();

    return 0;
}
