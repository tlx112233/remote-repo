#include <iostream>
using namespace std;
/*

作用：用于表示一串字符
两种风格
1. C风格字符串： char 变量名[] = "字符串值"
2. C++风格字符串： string 变量名 = "字符串值"

*/
int main(int argc, char *argv[])
{
    string str = "hello world";
    char zifuchuanzu[] = "hello world";
    cout << str << endl;
    cout << zifuchuanzu << endl;
    return 0;
}
