#ifndef SHAPEDECORATOR_H
#define SHAPEDECORATOR_H

#include "IShape.h"

//装饰器接口
class ShapeDecorator : public IShape
{
public:
    //构造
    ShapeDecorator( IShape *shape )
    {
        m_pShape = shape;
    }

    //析构
    ~ShapeDecorator()
    {

    }

    //绘图
    void draw()
    {
        m_pShape->draw();
    }

private:
    //要装饰的形状
    IShape  *m_pShape;
};

#endif // SHAPEDECORATOR_H
