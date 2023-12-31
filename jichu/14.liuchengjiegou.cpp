/*

C/C++支持最基本的三种程序运行结构：==顺序结构、选择结构、循环结构==
    顺序结构：程序按顺序执行，不发生跳转 
    选择结构：依据条件是否满足，有选择的执行相应功能
    循环结构：依据条件是否满足，循环多次执行某段代码

*/
#include <iostream>
using namespace std;


int main() {
//选择结构-单行if语句
//输入一个分数，如果分数大于600分，视为考上一本大学，并在屏幕上打印
int score = 0;
cout << "请输入一个分数：" << endl;
cin >> score;
cout << "您输入的分数为： " << score << endl;
//if语句
//注意事项，在if判断语句后面，不要加分号
if (score > 300)
{
cout << "我考上了研究生！！！" << endl;
}
else if (score > 270&&score <300)
{
cout << "我可以调剂" << endl;
}
else
{
cout << "明年再来" << endl;
}
return 0;
}