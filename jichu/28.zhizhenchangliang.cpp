#include<iostream>
using namespace std;


/*

1. const修饰指针 --- 常量指针  可以修改地址，但不能修改指针指向的常量数值
2. const修饰常量 --- 指针常量   可以修改指针指向常量的值，但不能修改地址
3. const即修饰指针，又修饰常量  都不可以修改

*/
int main()
{
    int a = 20;
    int b = 10;
    //const修饰的是指针，指针指向可以改，指针指向的值不可以更改
    const int * p1 = &a;
    p1 = &b; //正确

    cout << * p1 << endl;
    //*p1 = 100; 报错
    //const修饰的是常量，指针指向不可以改，指针指向的值可以更改
    int * const p2 = &a;
    //p2 = &b; //错误
    *p2 = 100; //正确
    cout << * p2 << endl;
    //const既修饰指针又修饰常量
    const int * const p3 = &a;
    cout << p3 << endl;
    cout << * p3 << endl;
    //p3 = &b; //错误
    //*p3 = 100; //错误
    return 0;

}