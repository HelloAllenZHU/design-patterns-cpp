#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

// 汽车接口
class ICar
{
public:
    virtual std::string Name() = 0;  // 汽车名称
};

// 奔驰汽车
class BenzCar : public ICar
{
public:
    std::string Name() {
        return "Benz Car";
    }
};

// 宝马汽车
class BmwCar : public ICar
{
public:
    std::string Name() {
        return "Bmw Car";
    }
};

// 奥迪汽车
class AudiCar : public ICar
{
public:
    std::string Name() {
        return "Audi Car";
    }
};

#endif // PRODUCT_H
