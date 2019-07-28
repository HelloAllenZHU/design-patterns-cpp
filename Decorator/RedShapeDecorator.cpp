#include <iostream>
#include "RedShapeDecorator.h"

//构造***********************************
RedShapeDecorator::RedShapeDecorator( IShape *shape ) : ShapeDecorator( shape )
{

}

//析构***********************************
RedShapeDecorator::~RedShapeDecorator()
{

}

//画图***********************************
void RedShapeDecorator::draw()
{
    std::cout << "red ";
    ShapeDecorator::draw();
}
