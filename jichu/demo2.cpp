/*水仙花数 1^3+5^3+3^3=153*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
   int bai,shi,ge=0;
   int num=100;
    for (num=100; num<1000; num++)
    {
        bai = num / 100 ;
        shi = num % 100 /10 ;
        ge = num % 10 ;
      
        if (bai*bai*bai+shi*shi*shi+ge*ge*ge == num)
        {
             cout << num << "是水仙花数" << endl;
             cout << "此时百位是" <<bai <<"此时十位是"<< shi << "此时个位是" << ge << endl;
             
        }
        
    }

   
}