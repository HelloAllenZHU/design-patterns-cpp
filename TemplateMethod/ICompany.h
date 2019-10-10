#ifndef ICOMPANY_H
#define ICOMPANY_H

class ICompany
{
public:
    //校招
    virtual void recruit() = 0;

    //宣讲
    virtual void careerTalk() = 0;

    //接收简历
    virtual void receiveResume() = 0;

    //面试
    virtual void interview() = 0;

    //录取
    virtual void offer() = 0;
};

#endif // ICOMPANY_H
