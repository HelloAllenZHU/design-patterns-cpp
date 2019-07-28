#ifndef SHAPERECT_H
#define SHAPERECT_H

#include "IShape.h"

//矩形
class ShapeRect : public IShape
{
public:
    //构造
    ShapeRect();

    //析构
    ~ShapeRect();

    //画图
    virtual void draw();
};

#endif // SHAPERECT_H
