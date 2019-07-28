#ifndef IUSB_H
#define IUSB_H

//USB接口
class IUsb
{
public:
    //连接
    virtual void conectUSB() = 0;
};

#endif // IUSB_H
