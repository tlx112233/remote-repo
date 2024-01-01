/*
菱形继承概念：
两个派生类继承同一个基类
又有某个类同时继承者两个派生类
这种继承被称为菱形继承，或者钻石继承
1. 羊继承了动物的数据，驼同样继承了动物的数据，当草泥马使用数据时，就会产生二义性。
2. 草泥马继承自动物的数据继承了两份，其实我们应该清楚，这份数据我们只需要一份就可以
*/
#include <iostream>
using namespace std;
class Animal
{
public:
    int m_Age;
};
// 继承前加virtual关键字后，变为虚继承
// 此时公共的父类Animal称为虚基类
class Sheep : virtual public Animal
{
};
class Tuo : virtual public Animal
{
};
class SheepTuo : public Sheep, public Tuo
{
};
void test01()
{
    SheepTuo st;
    st.Sheep::m_Age = 100;
    st.Tuo::m_Age = 200;
    cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
    cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
    cout << "st.m_Age = " << st.m_Age << endl;
}
int main()
{
    test01();
    system("pause");
    return 0;
}