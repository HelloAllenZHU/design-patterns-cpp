#ifndef CARDREADER_H
#define CARDREADER_H

#include <iostream>
#include "IUsb.h"
#include "SDCard.h"

class SDCard;

//读卡器类(对象适配器模式)
class CardReader : public IUsb
{
public:
    //构造
    CardReader() {
        m_pSDCard = new SDCard;
    }

    //析构
    ~CardReader() {
        delete m_pSDCard;
    }

    //连接
    void conectUSB() {
        m_pSDCard->connectToReader();
        std::cout << "CardReader conectUSB..." << std::endl;
    }

private:
    //SD卡类对象
    SDCard  *m_pSDCard;
};

#endif // CARDREADER_H
