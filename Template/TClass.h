#ifndef TCLASS_H
#define TCLASS_H

#include<iostream>

//模板类
template <class T>
class TClass
{
public:
    TClass();
    ~TClass();

    T add( T a, T b );
};

//构造
template <class T>
TClass<T>::TClass()
{
    std::cout << "TClass construct" << std::endl;
}

//析构
template <class T>
TClass<T>::~TClass()
{
    std::cout << "TClass destruct" << std::endl;
}

//相加运算
template <class T>
T TClass<T>::add( T a, T b ) {
    return a + b;
}

#endif // TCLASS_H
