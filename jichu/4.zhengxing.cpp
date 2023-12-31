#include <iostream>
using namespace std;


/*数据类型 占用空间 取值范围
short(短整型)                  2字节 (-2^15 ~ 2^15-1)
int(整型)                      4字节 (-2^31 ~ 2^31-1)
long(长整形)                   Windows为4字节，Linux为4字节(32位)，8字节(64位)(-2^31 ~ 2^31-1)
long long(长长整形)            8字节 (-2^63 ~ 2^631)
*/
int main(int argc, char *argv[])
{
    short duanzhengxing = 2;
    int zhengxing = 4;
    long changzhengxing = 4;
    long long changchangzhengxing = 8;
    cout <<"该变量为" << duanzhengxing <<"字节" <<endl;
    cout <<"该变量为" << zhengxing <<"字节" <<endl;
    cout <<"该变量为" << changzhengxing <<"字节" <<endl;
    cout <<"该变量为" << changchangzhengxing <<"字节" <<endl;

    cout << "short 类型所占内存空间为： " << sizeof(short) << endl;
    cout << "int 类型所占内存空间为： " << sizeof(int) << endl;
    cout << "long 类型所占内存空间为： " << sizeof(long) << endl;
    cout << "longlong 类型所占内存空间为： " << sizeof(long long) << endl;
    
    return 0;
}
