#ifndef IOBSERVER_H
#define IOBSERVER_H

//观察者接口
class IObserver
{
public:
    //更新
    virtual void Update( float price ) = 0;
};

#endif // IOBSERVER_H
