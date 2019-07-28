#ifndef REDSHAPEDECORATOR_H
#define REDSHAPEDECORATOR_H

#include "ShapeDecorator.h"

//红色形状装饰器类
class RedShapeDecorator : public ShapeDecorator
{
public:
    //构造
    RedShapeDecorator( IShape *shape );

    //析构
    ~RedShapeDecorator();

    //绘图
    void draw();
};

#endif // REDSHAPEDECORATOR_H
