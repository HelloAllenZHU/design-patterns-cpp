#include <iostream>
#include "Demo.h"

Demo::Demo()
{
    std::cout << "Demo 构造" << std::endl;
    m_p = this;
}

Demo::~Demo()
{
    std::cout << "Demo 析构" << std::endl;
}
