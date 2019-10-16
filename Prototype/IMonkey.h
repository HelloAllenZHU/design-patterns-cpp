#ifndef IMONKEY_H
#define IMONKEY_H

//猴子接口
class IMonkey
{
public:
    //克隆
    virtual IMonkey * clone() = 0;

    //dosomething
    virtual void dosomething() = 0;
};

#endif // IMONKEY_H
