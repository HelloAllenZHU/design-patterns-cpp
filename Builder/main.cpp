#include <iostream>
#include "Director.h"
#include "Builder.h"
#include "Product.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;

    Director        *pDirector        = new Director();
    BuilderMacbook  *pBuilderMacbook  = new BuilderMacbook();
    BuilderThinkpad *pBuilderThinkpad = new BuilderThinkpad();

    //组装各个部件
    pDirector->Create( pBuilderMacbook );
    pDirector->Create( pBuilderThinkpad );

    //获取组装后的产品
    Product *pMacbook  = pBuilderMacbook->getProduct();
    Product *pThinkpad = pBuilderThinkpad->getProduct();

    //输出测试
    std::cout << pMacbook->getCpu() << std::endl;
    std::cout << pThinkpad->getCpu() << std::endl;

    //delete pThinkpad;
    //delete pMacbook;
    delete pBuilderThinkpad;
    delete pBuilderMacbook;
    delete pDirector;
    return 0;
}
