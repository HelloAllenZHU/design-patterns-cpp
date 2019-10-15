/*
 * 用原型实例指定创建对象的种类，并且通过拷贝这个原型来创建新的对象。
 * 使用场景：新new一个对象的代价比较大(复杂、耗时间、耗内存等)，比如需要读数据库、读网络或者需要授权，那么此时可以直接拷贝现有的对象。
 * 例如：创建一个线程/进程对象，然后clone该线程对象。
 */
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
