#ifndef FACTORY_H
#define FACTORY_H

#include "Product.h"

// 工厂接口
class IFactory
{
public:
    /*enum CAR_TYPE {
       BENZ_CAR,    // 奔驰汽车
       BMW_CAR,     // 宝马汽车
       AUDI_CAR     // 奥迪汽车
    };*/

    virtual ICar* CreateCar() = 0;  // 生产汽车
};

// 奔驰工厂
class BenzFactory : public IFactory
{
public:
    ICar* CreateCar() {
        return new BenzCar();
    }
};

// 宝马工厂
class BmwFactory : public IFactory
{
public:
    ICar* CreateCar() {
        return new BmwCar();
    }
};

// 奥迪工厂
class AudiFactory : public IFactory
{
public:
    ICar* CreateCar() {
        return new AudiCar();
    }
};

#endif // FACTORY_H
