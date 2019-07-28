#ifndef DEMO_H
#define DEMO_H


class Demo
{
public:
    Demo();
    ~Demo();

    Demo *m_p;

    //垃圾回收类
    class GC
    {
    public:
        static GC gc;

    public:
        ~GC()
        {
            std::cout << "Singleton::GC垃圾回收类 析构" << std::endl;
        }
    };
};

#endif // DEMO_H
