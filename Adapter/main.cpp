/*
 * 将一个类的接口转换成客户希望的另外一个接口，使得原本由于接口不兼容而不能一起工作的那些类可以一起工作。
 * 例如：电脑和SD卡不能直接连接(假设电脑没有SD读卡器)，此时就需要创建一个读卡器，一侧插入SD卡，另一侧连接电脑USB
 * 适配器是一种补救模式
 * 适用场景：
 * 1 系统需要使用现有的一些类，而这些类的接口不符合系统的需要
 * 2 想要建立一个可以重复使用的类，用于与一些彼此之间没有太大关联的一些类，包括一些可能在将来引进的类一起工作?
 * 3 需要一个统一的输出接口，而输入端的类型不可预知
 * 总之：只要记住一点，当你有动机修改一个已经投入生产的接口，这时候就可以考虑试用适配器模式。
 */

#include <iostream>
#include "CardReader.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;

    //创建读卡器(适配器)
    IUsb *pAdapter = new CardReader;

    //连接到USB
    pAdapter->conectUSB();

    delete pAdapter;
    return 0;
}
