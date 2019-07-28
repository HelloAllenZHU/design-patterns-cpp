#include <iostream>
#include "SDCard.h"
#include "CardReader.h"

//构造***********************************
CardReader::CardReader()
{
    m_pSDCard = new SDCard;
}

//构造***********************************
CardReader::~CardReader()
{
    delete m_pSDCard;
}

//连接***********************************
void CardReader::conectUSB()
{
    std::cout << "CardReader conectUSB..." << std::endl;
    m_pSDCard->connectXXX();
}
