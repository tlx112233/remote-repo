/*
    C++定义常量两种方式

    #define 宏常量： #define 常量名 常量值
    通常在文件上方定义，表示一个常量

    const修饰的变量 const 数据类型 常量名 = 常量值
    通常在变量定义前加关键字const，修饰该变量为常量，不可修改
*/

#include <iostream>
using namespace std;


#define day 7   //define定义的变量不可修改


int main(int argc, char *argv[])
{
    const int month =12;
    cout <<"一年有" << month << "月" <<endl;

    // month = 13;//const同样是定量
    // cout <<"一年有" << month << "月" <<endl;

    cout << "一周有" << day << "天"<< endl;
    return 0;
}