#include <iostream>
#include <string>
using namespace std;
class Girlfrind;
class Person
{
    friend class Girlfrind;

public:
    string name;
    Person();
    ~Person();

private:
    int age;
};
class Girlfrind
{
public:
    void getAge(Person *P)
    {
        cout << P->age << endl;
    }
};
Person::Person()
{
    cout << "这是Person的析构函数" << endl;
    name = "啦啦啦";
    age = 22;
}
Person::~Person()
{
    cout << "这是Person的析构函数" << endl;
}
void test01()
{
    Person P;
    Girlfrind W;
    W.getAge(&P);
}
int main()
{
    test01();
}