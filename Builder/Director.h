#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "Builder.h"

//指挥者
class Director
{
public:
    //构造
    Director() {}

    //析构
    ~Director() {}

    //创建
    void Create( IBuilder *pBuilder )
    {
        if ( pBuilder != nullptr )
        {
            pBuilder->buildCpu();
            pBuilder->buildBoard();
            pBuilder->buildMemory();
            pBuilder->buildDisplay();
        }
    }
};

#endif // DIRECTOR_H
