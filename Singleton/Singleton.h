#ifndef SINGLETON_H
#define SINGLETON_H

/*
 * 单例模式
 * 特点：
 * 1、单例类有且仅有一个实例，为了避免被外界创建多个对象，所以构造函数必须为私有，赋值操作符也不能被外界调用
 * 2、单例类必须自己创建该唯一实例，所以该类包含一个private static * instance
 * 3、单例类必须给外界提供一个访问该唯一实例的入口，例如public static * GetInstance
 */

#include <iostream>

class Singleton
{
private:
    // 默认构造函数
    Singleton();

    // 拷贝构造函数
    Singleton( const Singleton & ); // 无需实现

    // 重载赋值操作符(禁止赋值)
    Singleton& operator = ( const Singleton& ); // 无需实现

    // 析构函数(只是用于验证垃圾回收是否有效)
    ~Singleton();

public:
    // 返回唯一实例
    static Singleton * GetInstance();

    // do something...
    void DoSomething();

private:
    static Singleton * m_pSingleton;

private:
    // 垃圾回收类
    class GC
    {
    private:
        static GC gc;

    public:
        ~GC()
        {
            if ( m_pSingleton != nullptr ) {
                std::cout << "Singleton::GC Grabber destruct..." << std::endl;
                delete m_pSingleton;
                m_pSingleton = nullptr;
            }
        }
    };
};

#endif // SINGLETON_H
