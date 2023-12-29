/*

== 相等于 4 == 3 0
!= 不等于 4 != 3 1
< 小于 4 < 3 0
> 大于 4 > 3 1
<= 小于等于 4 <= 3 0
>= 大于等于 4 >= 1 1

*/
#include <iostream>
using namespace std;

int main() {
int a = 10;
int b = 20;
cout << (a == b) << endl; // 0
cout << (a != b) << endl; // 1
cout << (a > b) << endl; // 0
cout << (a < b) << endl; // 1
cout << (a >= b) << endl; // 0
cout << (a <= b) << endl; // 1
system("pause");
return 0;
}