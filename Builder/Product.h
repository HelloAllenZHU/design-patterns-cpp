#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

//产品类(每个产品的参数不同，所以表现可能不同)
class Product
{
public:
    //构造
    Product()
    {
        m_str_cpu       = "";
        m_str_board     = "";
        m_str_memory    = "";
        m_str_display   = "";
    }

    //析构
    ~Product()
    {

    }

    //创建cpu
    void createCpu( std::string cpu )
    {
        m_str_cpu = cpu;
    }

    //创建主板
    void createBoard( std::string board )
    {
        m_str_board = board;
    }

    //创建内存
    void createMemory( std::string memory )
    {
        m_str_memory = memory;
    }

    //创建显示器
    void createDisplay( std::string display )
    {
        m_str_display = display;
    }

    //获取cpu
    std::string getCpu()
    {
        return m_str_cpu;
    }

    //获取主板
    std::string getBoard()
    {
        return m_str_board;
    }

    //获取内存
    std::string getMemory()
    {
        return m_str_memory;
    }

    //获取显示器
    std::string getDisplay()
    {
        return m_str_display;
    }

private:
    //cpu
    std::string m_str_cpu;

    //主板
    std::string m_str_board;

    //内存
    std::string m_str_memory;

    //显示器
    std::string m_str_display;
};

#endif // PRODUCT_H
