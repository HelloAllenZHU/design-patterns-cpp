/*
 * 定义一个操作中的算法结构，将一些具体的实现步骤放到到子类中。
 * 子类可以在不改变算法结构的前提下，重新定义该算法的某些特定实现。
 * 示例：Login、Gateway、Center服在启动时，都需要读配置、连MQ、连Redis、连Mysql，
 * 但是每一个服务器具体的实现细节又各有不同
 */

#include <iostream>
#include "Company.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;

    ICompany *pAlibaba = new Alibaba;
    ICompany *pTencent = new Tencent;

    pAlibaba->recruit();
    pTencent->recruit();

    delete pAlibaba;
    delete pTencent;
    return 0;
}
