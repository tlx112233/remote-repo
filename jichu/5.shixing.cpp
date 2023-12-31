#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    float f1 = 3.14f;//f的目的是告诉变量这是一个单精度的小数，如果不加就是双精度
    double d1 = 3.14;
    cout << f1 << endl;
    cout << d1<< endl;
    cout << "float sizeof = " << sizeof(f1) << endl;
    cout << "double sizeof = " << sizeof(d1) << endl;
    return 0;
}
