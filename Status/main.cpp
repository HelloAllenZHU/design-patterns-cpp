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
