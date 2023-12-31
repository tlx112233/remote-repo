// 练习案例：乘法口诀表
// 案例描述：利用嵌套循环，实现九九乘法表
#include<iostream>
using namespace std;

int main()
{
    int sum;
    for (int i = 1; i <= 9; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            sum = i * j;
            cout << i << "X" <<  j << "=" << sum << "\t";
        }cout << endl;
        
    }
    

}