#ifndef COMPANY_H
#define COMPANY_H

#include "ICompany.h"

//公司类
class Company : public ICompany
{
public:
    //构造
    Company();

    //析构
    ~Company();

    //校招
    virtual void recruit();

    //宣讲
    virtual void careerTalk();

    //接收简历
    virtual void receiveResume();

    //面试
    //virtual void interview() = 0;

    //录取
    //virtual void offer() = 0;
};

//阿里巴巴
class Alibaba : public Company
{
public:
    //面试
    virtual void interview();

    //录取
    virtual void offer();
};

//腾讯
class Tencent : public Company
{
public:
    //面试
    virtual void interview();

    //录取
    virtual void offer();
};

#endif // COMPANY_H
