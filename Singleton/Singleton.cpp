
#include "Singleton.h"

//懒汉式：程序启动时就创建，优点：简单、线程安全，缺点：提前占用内存
Singleton *   Singleton::m_pSingleton = new Singleton();

//生命垃圾回收对象(声明之后会析构gc，否则不会，gc会释放单例对象)
Singleton::GC Singleton::GC::gc;

//默认构造函数
Singleton::Singleton()
{
    std::cout << "Singleton default construct..." << std::endl;
}
/*
//复制构造函数
Singleton::Singleton( const Singleton & )
{
    std::cout << "Singleton copy construct..." << std::endl;
}*/

//析构函数(用于验证垃圾回收)
Singleton::~Singleton()
{
    std::cout << "Singleton destruct..." << std::endl;
}

//GetInstance
Singleton * Singleton::GetInstance()
{
    std::cout << "Singleton GetInstance..." << std::endl;
    return m_pSingleton;
}

//DoSomething
void Singleton::DoSomething()
{
    std::cout << "Singleton DoSomething..." << std::endl;
}
