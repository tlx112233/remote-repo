/*
5.2.3 冒泡排序
作用： 最常用的排序算法，对数组内元素进行排序
1. 比较相邻的元素。如果第一个比第二个大，就交换他们两个。
2. 对每一对相邻元素做同样的工作，执行完毕后，找到第一个最大值。
3. 重复以上的步骤，每次比较次数-1，直到不需要比较
示例： 将数组 { 4,2,8,0,5,7,1,3,9 } 进行升序排序
*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int paixvshuzu[] = {4,2,8,0,5,7,1,3,9};
    int zhongjianbianliang;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9-1-i; j++)
        {
       
        if (paixvshuzu[j] > paixvshuzu[j+1])
        {
            zhongjianbianliang = paixvshuzu[j];
            paixvshuzu[j] = paixvshuzu[j+1];
            paixvshuzu[j+1] = zhongjianbianliang;
        }
             /* code */
        }
    }
    for (int i = 0; i < 10; i++)
    {

        cout << paixvshuzu[i] << " ";
    }
}
