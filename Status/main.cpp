/*
 * 一个对象根据其内部的状态来表现不同的行为。
 * 例如：服务器当前是维护状态，如果有用户访问，就返回"系统正在维护"；否则就正常服务。
 */
#include <iostream>
#include "Context.h"
#include "IState.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;

    Context *pContext = new Context();
    pContext->setState( new RedState() );
    pContext->dosomething();
    pContext->setState( new YellowState() );
    pContext->dosomething();
    pContext->setState( new GreenState() );
    pContext->dosomething();

    delete pContext;
    pContext = NULL;
    return 0;
}
