/*
 * 将一个复杂对象的构建与它的表示分离，使得同样的构建过程可以创建不同的表示。
 * 例如：有同一套创建流程，它创建一个斗地主游戏房间，也可以创建一个卡五星游戏房间。
 */

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
