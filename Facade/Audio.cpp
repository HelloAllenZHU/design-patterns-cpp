#include <iostream>
#include "Audio.h"

//构造***********************************
Audio::Audio()
{

}

//析构***********************************
Audio::~Audio()
{

}

//初始化*********************************
void Audio::init()
{
    std::cout << "Audio init..." << std::endl;
}

//开始***********************************
void Audio::start()
{
    std::cout << "Audio start..." << std::endl;
}

//结束***********************************
void Audio::stop()
{
    std::cout << "Audio stop..." << std::endl;
}
