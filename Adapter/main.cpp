#include <iostream>
#include "CardReader.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;

    //创建读卡器(适配器)
    IUsb *pAdapter = new CardReader;

    //连接到USB
    pAdapter->conectUSB();

    delete pAdapter;
    return 0;
}
