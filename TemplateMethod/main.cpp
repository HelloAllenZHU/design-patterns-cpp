#include <iostream>
#include "Company.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;

    ICompany *pAlibaba = new Alibaba;
    ICompany *pTencent = new Tencent;

    pAlibaba->recuit();
    pTencent->recuit();

    delete pAlibaba;
    delete pTencent;
    return 0;
}
