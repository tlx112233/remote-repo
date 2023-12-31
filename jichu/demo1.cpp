/*
有三只小猪ABC，请分别输入三只小猪的体重，并且判断哪只小猪最重？
*/

#include<iostream>
using namespace std;

// int main(){

//     int A,B,C=0;
//     cout<<"请输入A猪重量"<<endl;
//     cin>>A;
//     cout<<"请输入B猪重量"<<endl;
//     cin>>B;
//     cout<<"请输入C猪重量"<<endl;
//     cin>>C;
//     if(A>B)
//     {
//         if(A>C)
//         {
//             cout<<"A猪最终"<<endl;
//         }
//         else 
//         {
//             cout<<"c猪最终"<<endl;
//         }
        
//     }
//     else 
//     {
//         if(B>C)
//         {
//             cout<<"B猪最终"<<endl;
//         }
//         else 
//         {
//             cout<<"c猪最终"<<endl;
//         }
//     }
//     return 0;
// }

int main() {
    int a = 10;
    int b = 20;
    int c = 0;
    c = a > b ? a : b;
    cout << "c = " << c << endl;
    //C++中三目运算符返回的是变量,可以继续赋值
    (a > b ? a : b) = 100;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    system("pause");
    return 0;
}