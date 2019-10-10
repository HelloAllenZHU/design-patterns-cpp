#include <iostream>
#include "Company.h"

//构造
Company::Company()
{
    ;
}

//析构
Company::~Company()
{
    ;
}

//校招
void Company::recruit()
{
    std::cout << "开始校招" << std::endl;
    careerTalk();
    receiveResume();
    interview();
    offer();
}

//宣讲
void Company::careerTalk()
{
    std::cout << "通用宣讲" << std::endl;
}

//接收简历
void Company::receiveResume()
{
    std::cout << "通用简历" << std::endl;
}
/*
//面试
void Company::interview()
{
    std::cout << "不通用面试" << std::endl;
}

//录取
void Company::offer()
{
    std::cout << "不通用录用" << std::endl;
}*/

//--------------------------------------阿里
//面试
void Alibaba::interview()
{
    std::cout << "阿里面试" << std::endl;
}

//录取
void Alibaba::offer()
{
    std::cout << "阿里录取" << std::endl;
}

//--------------------------------------腾讯
//面试
void Tencent::interview()
{
    std::cout << "腾讯面试" << std::endl;
}

//录取
void Tencent::offer()
{
    std::cout << "腾讯录取" << std::endl;
}
