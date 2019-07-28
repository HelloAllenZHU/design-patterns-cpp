#include <iostream>
#include "TClass.h"

using namespace std;

//模板函数：加法
template <class T>
T add( T a, T b ) {
    return a + b;
}

//模板函数：减法
template <class T>
T sub( T a, T b ) {
    return a - b;
}

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;

    cout << add( 3, 1 ) << endl;
    cout << add( 3.2, 1.1 ) << endl;
    cout << add( '3', '1' ) << endl;

    cout << sub( 3, 1 )  << endl;
    cout << sub( 3.2, 1.1 ) << endl;
    cout << sub( '3', '1' ) << endl;

    TClass<int> it;
    cout << it.add( 1, 2 ) << endl;
    return 0;
}
