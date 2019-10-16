#ifndef ISHAPE_H
#define ISHAPE_H

#include <iostream>

//图形接口
class IShape
{
public:
    //画图
    virtual void draw() = 0;
};

//矩形
class ShapeRect : public IShape
{
public:
    //构造
    ShapeRect() {

    }

    //析构
    ~ShapeRect() {

    }

    //画图
    virtual void draw() {
        std::cout << "rect draw..." << std::endl;
    }
};

//圆形
class ShapeCircle : public IShape
{
public:
    //构造
    ShapeCircle() {

    }

    //析构
    ~ShapeCircle() {

    }

    //画图
    virtual void draw() {
        std::cout << "circle draw..." << std::endl;
    }
};

//装饰器接口
class ShapeDecorator : public IShape
{
public:
    //构造
    ShapeDecorator( IShape *shape ) {
        m_pShape = shape;
    }

    //析构
    ~ShapeDecorator() {

    }

    //绘图
    virtual void draw() {
        m_pShape->draw();
    }

private:
    //要装饰的形状
    IShape  *m_pShape;
};

//红色形状装饰器类
class RedShapeDecorator : public ShapeDecorator
{
public:
    //构造
    RedShapeDecorator( IShape *shape ) : ShapeDecorator( shape ) {
        ;
    }

    //析构
    ~RedShapeDecorator() {

    }

    //绘图
    virtual void draw() {
        std::cout << "red ";
        ShapeDecorator::draw();
    }
};

#endif // ISHAPE_H
