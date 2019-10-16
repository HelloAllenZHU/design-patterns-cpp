#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

// 汽车接口
class ICar
{
public:
    virtual std::string Name() = 0;  // 汽车名称
};

//自行车接口
class IBike
{
public:
    virtual std::string Name() = 0;  // 自行车名称
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

// 奔驰自行车
class BenzBike : public IBike
{
public:
    std::string Name() {
        return "Benz Bike";
    }
};

// 宝马自行车
class BmwBike : public IBike
{
public:
    std::string Name() {
        return "Bmw Bike";
    }
};

// 奥迪自行车
class AudiBike : public IBike
{
public:
    std::string Name() {
        return "Audi Bike";
    }
};

#endif // PRODUCT_H
