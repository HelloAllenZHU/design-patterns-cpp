/* 定义一个用于创建对象的接口，让子类决定将哪一个类实例化。Factory Method 使一个类的实例化延迟到其子类。
 * 适用场景：有一系列相似的产品，不确定用户具体要创建哪一个产品，其中工厂只生产一种产品。
 * 示例：3个不同的工厂，分别生产3种不同的产品
 * 产品A      产品B        产品C
 *  *          *           *
 * 工厂A      工厂B        工厂C
 *  *          *           *
 *       *     *     *
 *             *
 *          抽象工厂
 */

#include <iostream>
#include "Factory.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    // 奔驰
    IFactory *pFactory0 = new BenzFactory();
    ICar     *pCar0     = pFactory0->CreateCar();
    std::cout << "Benz factory: " << pCar0->Name() << std::endl;
    delete pCar0;
    delete pFactory0;

    // 宝马
    IFactory *pFactory1 = new BmwFactory();
    ICar     *pCar1     = pFactory1->CreateCar();
    std::cout << "Bmw factory: " << pCar1->Name() << std::endl;
    delete pCar1;
    delete pFactory1;

    // 奥迪
    IFactory *pFactory2 = new AudiFactory();
    ICar     *pCar2     = pFactory2->CreateCar();
    std::cout << "Audi factory: " << pCar2->Name() << std::endl;
    delete pCar2;
    delete pFactory2;

    return 0;
}
