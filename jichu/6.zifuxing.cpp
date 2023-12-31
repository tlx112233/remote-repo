#include <iostream>
using namespace std;
/*
C和C++中字符型变量只占用==1个字节==。
字符型变量并不是把字符本身放到内存中存储，而是将对应的ASCII编码放入到存储单元

*/
int main(int argc, char *argv[])
{
    char ch = 'a';
    cout << ch << endl;
    cout << sizeof(char) << endl;
    //ch = "abcde"; //错误，不可以用双引号
    //ch = 'abcde'; //错误，单引号内只能引用一个字符
    cout << (int)ch << endl; //查看字符a对应的ASCII码
    ch = 97; //可以直接用ASCII给字符型变量赋值
    cout << ch << endl;
    return 0;
    
}
