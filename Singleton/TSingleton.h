#ifndef TSINGLETON_H
#define TSINGLETON_H

#include <iostream>

template <class T>
class TSingleton : public T
{
private:
    // 默认构造函数
    TSingleton();

    // 拷贝构造函数
    TSingleton( const TSingleton & ); // 无需实现

    // 重载赋值操作符(禁止赋值)
    TSingleton & operator = ( const TSingleton & ); // 无需实现

    // 析构函数(只是用于验证垃圾回收是否有效)
    ~TSingleton() {}

public:
    // 返回唯一实例
    static T * GetInstance() {
        if ( m_pInstance == nullptr )
            m_pInstance = new T;

        return m_pInstance;
    }

private:
    static T * m_pInstance;

public:
    // 垃圾回收类
    class GC
    {
    private:
        static GC gc;

    public:
        ~GC()
        {
            if ( m_pInstance != nullptr ) {
                std::cout << "TSingleton<T>::GC Grabber destruct..." << std::endl;
                delete m_pInstance;
                m_pInstance = nullptr;
            }
        }
    };
};


//饿汉式：程序启动时就创建，优点：简单、线程安全，缺点：提前占用内存
/*template <class T>
T *   TSingleton<T>::m_pInstance = new T;*/

//懒汉式：按使用需求创建，优点：不提前占用内存，缺点：非线程安全
//Qt窗口必须在QApplication实例之后创建
template <class T>
T *   TSingleton<T>::m_pInstance = nullptr;

//声明垃圾回收对象(声明之后会析构gc，gc会释放单例对象，未声明则不会)
template <class T>
class TSingleton<T>::GC TSingleton<T>::GC::gc;

#endif // TSINGLETON_H
