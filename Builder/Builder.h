#ifndef BUILDER_H
#define BUILDER_H

#include "Product.h"

class Product;

//建造者接口
class IBuilder
{
public:
    //创建cpu
    virtual void buildCpu() = 0;

    //创建主板
    virtual void buildBoard() = 0;

    //创建内存
    virtual void buildMemory() = 0;

    //创建显示器
    virtual void buildDisplay() = 0;
};

//Macbook建造者类
class BuilderMacbook : public IBuilder
{
public:
    //构造
    BuilderMacbook()
    {
        m_pProduct = new Product();
    }

    //析构
    ~BuilderMacbook()
    {
        delete m_pProduct;
    }

    //创建cpu
    void buildCpu()
    {
        m_pProduct->createCpu( "i5-530" );
    }

    //创建主板
    void buildBoard()
    {
        m_pProduct->createBoard( "华硕" );
    }

    //创建内存
    void buildMemory()
    {
        m_pProduct->createMemory( "三星" );
    }

    //创建显示器
    void buildDisplay()
    {
        m_pProduct->createDisplay( "AOC" );
    }

    //返回产品
    Product * getProduct()
    {
        if ( m_pProduct != nullptr )
            return m_pProduct;
        else
            return nullptr;
    }

private:
    Product *m_pProduct;
};

//Thinkpad建造者类
class BuilderThinkpad : public IBuilder
{
public:
    //构造
    BuilderThinkpad()
    {
        m_pProduct = new Product();
    }

    //析构
    ~BuilderThinkpad()
    {
        delete m_pProduct;
    }

    //创建cpu
    void buildCpu()
    {
        m_pProduct->createCpu( "i7-730" );
    }

    //创建主板
    void buildBoard()
    {
        m_pProduct->createBoard( "技嘉" );
    }

    //创建内存
    void buildMemory()
    {
        m_pProduct->createMemory( "金士顿" );
    }

    //创建显示器
    void buildDisplay()
    {
        m_pProduct->createDisplay( "LG" );
    }

    //返回产品
    Product * getProduct()
    {
        if ( m_pProduct != nullptr )
            return m_pProduct;
        else
            return nullptr;
    }

private:
    Product *m_pProduct;
};

#endif // BUILDER_H
