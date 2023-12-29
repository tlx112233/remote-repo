/*
6 函数
6.1 概述
    作用：将一段经常使用的代码封装起来，减少重复代码
    一个较大的程序，一般分为若干个程序块，每个模块实现特定的功能。
6.2 函数的定义
函数的定义一般主要有5个步骤：
    1、返回值类型
    2、函数名
    3、参数表列
    4、函数体语句
    5、return 表达式

    返回值类型 ：一个函数可以返回一个值。在函数定义中
    函数名：给函数起个名称
    参数列表：使用该函数时，传入的数据
    函数体语句：花括号内的代码，函数内需要执行的语句
    return表达式： 和返回值类型挂钩，函数执行完后，返回相应的数据
*/
#include<iostream>
using namespace std;

void swap(int num1, int num2)
{
    cout << "交换前：" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "交换后：" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    //return ; 当函数声明时候，不需要返回值，可以不写return
}

int main() {
    int a = 10;
    int b = 20;
    swap(a, b);
    cout << "mian中的 a = " << a << endl;
    cout << "mian中的 b = " << b << endl;
    system("pause");
    return 0;
}