#ifndef SDCARD_H
#define SDCARD_H

#include <iostream>

//SD类
class SDCard
{
public:
    //构造
    SDCard() {

    }

    //析构
    ~SDCard() {

    }

    //连接
    void connectToReader() {
        std::cout << "SDCard connectToReader..." << std::endl;
    }
};

#endif // SDCARD_H
