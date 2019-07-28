#ifndef CARDREADER_H
#define CARDREADER_H

#include "IUsb.h"

class SDCard;

//读卡器类
class CardReader : public IUsb
{
public:
    //构造
    CardReader();

    //析构
    ~CardReader();

    //连接
    void conectUSB();

private:
    //SD卡类对象
    SDCard  *m_pSDCard;
};

#endif // CARDREADER_H
