#ifndef SHAPECIRCLE_H
#define SHAPECIRCLE_H

#include "IShape.h"

//圆形
class ShapeCircle : public IShape
{
public:
    //构造
    ShapeCircle();

    //析构
    ~ShapeCircle();

    //画图
    virtual void draw();
};

#endif // SHAPECIRCLE_H
