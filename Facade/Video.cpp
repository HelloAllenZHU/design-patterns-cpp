#include <iostream>
#include "Video.h"

//构造***********************************
Video::Video()
{

}

//析构***********************************
Video::~Video()
{

}

//初始化*********************************
void Video::init()
{
    std::cout << "Video init..." << std::endl;
}

//开始***********************************
void Video::start()
{
    std::cout << "Video start..." << std::endl;
}

//结束***********************************
void Video::stop()
{
    std::cout << "Video stop..." << std::endl;
}
