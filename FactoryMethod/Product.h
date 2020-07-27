#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

// 汽车接口
class ICar
{
public:
    virtual ~ICar(){}
    virtual std::string Run() = 0;  // 汽车跑动
};

// 奔驰汽车
class BenzCar : public ICar
{
public:
    std::string Run() {
        return "Benz Car Run...";
    }
};

// 宝马汽车
class BmwCar : public ICar
{
public:
    std::string Run() {
        return "Bmw Car Run...";
    }
};

// 奥迪汽车
class AudiCar : public ICar
{
public:
    std::string Run() {
        return "Audi Car Run...";
    }
};

#endif // PRODUCT_H
