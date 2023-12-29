// 循环练习案例：==猜数字==
// 案例描述：系统随机生成一个1到100之间的数字，玩家进行猜测，如果猜错，提示玩家数字过大或过
// 小，如果猜对恭喜玩家胜利，并且退出游戏。

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
   int num,caide=0;
   num = rand() % 100;
   cout << "请输入数字" << endl;
   cin >> caide;

   while(caide != num)
   {
      cout << "猜错了，请继续重新猜" << endl;
      cout << "正确数字是" << num <<endl;
      cin >> caide;
   }
    cout << "猜对了" << endl;
}

/*
作用： 满足循环条件，执行循环语句
语法： do{ 循环语句 } while(循环条件);
注意：与while的区别在于==do...while会先执行一次循环语句==，再判断循环条件
*/