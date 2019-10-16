/* 提供一个创建一系列相关或相互依赖对象、产品的接口，而无需指定它们具体的类。
 * 适用场景：有多个工厂，每个工厂需要创建有一系列相关联的多个产品。
 * 示例：3个不同的工厂，分别生产各自的3种不同的产品
 * 产品A/B/C      产品A/B/C        产品A/B/C
 *   *              *               *
 * 工厂A           工厂B            工厂C
 *   *              *               *
 *          *       *       *
 *                  *
 *               抽象工厂
 */

#include <iostream>
#include "Factory.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    // 奔驰
    IFactory *pFactory0 = IFactory::CreateFactory( IFactory::FACTORY_TYPE::BENZ_FACTORY );
    ICar     *pCar0     = pFactory0->CreateCar();
    IBike    *pBike0    = pFactory0->CreateBike();
    cout << "Benz factory - Car: " << pCar0->Name() << endl;
    cout << "Benz factory - Bike: " << pBike0->Name() << endl;
    delete pCar0;
    delete pBike0;
    delete pFactory0;

    // 宝马
    IFactory *pFactory1 = IFactory::CreateFactory( IFactory::FACTORY_TYPE::BMW_FACTORY );
    ICar     *pCar1     = pFactory1->CreateCar();
    IBike    *pBike1    = pFactory1->CreateBike();
    cout << "Bmw factory - Car: " << pCar1->Name() << endl;
    cout << "Bmw factory - Bike: " << pBike1->Name() << endl;

    delete pCar1;
    delete pBike1;
    delete pFactory1;

    // 奥迪
    IFactory *pFactory2 = IFactory::CreateFactory( IFactory::FACTORY_TYPE::AUDI_FACTORY );
    ICar     *pCar2     = pFactory2->CreateCar();
    IBike    *pBike2    = pFactory2->CreateBike();
    cout << "Audi factory - Car: " << pCar2->Name() << endl;
    cout << "Audi factory - Bike: " << pBike2->Name() << endl;

    delete pCar2;
    delete pBike2;
    delete pFactory2;

    return 0;
}
