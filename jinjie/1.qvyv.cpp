/*
C++程序在执行时，将内存大方向划分为4个区域
    代码区：存放函数体的二进制代码，由操作系统进行管理的
    全局区：存放全局变量和静态变量以及常量
    栈区：由编译器自动分配释放, 存放函数的参数值,局部变量等
    堆区：由程序员分配和释放,若程序员不释放,程序结束时由操作系统回收

    1.1 程序运行前
    在程序编译后，生成了exe可执行程序，未执行该程序前分为两个区域
    代码区：
        存放 CPU 执行的机器指令
        代码区是共享的，共享的目的是对于频繁被执行的程序，只需要在内存中有一份代码即可
        代码区是只读的，使其只读的原因是防止程序意外地修改了它的指令
    全局区：
        全局变量和静态变量存放在此.
        全局区还包含了常量区, 字符串常量和其他常量也存放在此.
        ==该区域的数据在程序结束后由操作系统释放==.

    栈区：
        由编译器自动分配释放, 存放函数的参数值,局部变量等
        注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放
    堆区：
        由程序员分配释放,若程序员不释放,程序结束时由操作系统回收
        在C++中主要利用new在堆区开辟内存
*/
#include <iostream>
using namespace std;
// 全局变量
int g_a = 10;
int g_b = 10;
// 全局常量
const int c_g_a = 10;
const int c_g_b = 10;

// 栈区操作，不能轻易返回变量地址
//  int *func()
//  {
//      int a = 10;
//      return &a;
//  }

// 堆区，通过NEW把变量地址存储，C++中利用==new==操作符在堆区开辟数据
// 堆区开辟的数据，由程序员手动开辟，手动释放，释放利用操作符  == delete ==
//     语法： new 数据类型
//         利用new创建的数据，会返回该数据对应的类型的指针
int *func()
{
    int *a = new int(10);
    return a;
}

int main()
{
    // 局部变量
    int a = 10;
    int b = 10;
    // 打印地址
    cout << "局部变量a地址为： " << (long long)&a << endl;
    cout << "局部变量b地址为： " << (long long)&b << endl;
    cout << "全局变量g_a地址为： " << (long long)&g_a << endl;
    cout << "全局变量g_b地址为： " << (long long)&g_b << endl;
    // 静态变量
    static int s_a = 10;
    static int s_b = 10;
    cout << "静态变量s_a地址为： " << (long long)&s_a << endl;
    cout << "静态变量s_b地址为： " << (long long)&s_b << endl;
    cout << "字符串常量地址为： " << (long long)&"hello world" << endl;
    cout << "字符串常量地址为： " << (long long)&"hello world1" << endl;
    cout << "全局常量c_g_a地址为： " << (long long)&c_g_a << endl;
    cout << "全局常量c_g_b地址为： " << (long long)&c_g_b << endl;
    const int c_l_a = 10;
    const int c_l_b = 10;
    cout << "局部常量c_l_a地址为： " << (long long)&c_l_a << endl;
    cout << "局部常量c_l_b地址为： " << (long long)&c_l_b << endl;

    int *p = func();
    cout << *p << endl;
    cout << *p << endl;

    delete p;

    system("pause");
    return 0;
}

// // 堆区开辟数组
// int main()
// {
//     int *arr = new int[10];
//     for (int i = 0; i < 10; i++)
//     {
//         arr[i] = i + 100;
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     // 释放数组 delete 后加 []
//     delete[] arr;
//     system("pause");
//     return 0;
// }