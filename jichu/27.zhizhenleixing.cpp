/*
7.4 空指针和野指针
空指针：指针变量指向内存中编号为0的空间
用途：初始化指针变量
注意：空指针指向的内存是不可以访问的


野指针：指针变量指向非法的内存空间
示例2：野指针
空指针和野指针都不是我们申请的空间，因此不要访问。
*/

#include<iostream>
using namespace std;


// int main()
// {
//     //指针变量p指向内存地址编号为0的空间
//     int * p = NULL;
//     //访问空指针报错
//     //内存编号0 ~255为系统占用内存，不允许用户访问
//     cout << *p << endl;
//     system("pause");
//     return 0;

// }

int main() {
    //指针变量p指向内存地址编号为0x1100的空间
    // int * p = (int *)0x1100;
    //访问野指针报错
    // cout << *p << endl;
    // system("pause");
    return 0;
}