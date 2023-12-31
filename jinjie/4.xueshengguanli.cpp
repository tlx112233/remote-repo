// 设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
#include <iostream>
using namespace std;

// class student
// {

// public:
//     // 属性
//     int id;
//     string name;
//     // 行为
// };

// int main()
// {
//     student s1;
//     cout << "请输入学生姓名 " << endl;
//     cin >> s1.name;
//     cout << "请输入学生ID " << endl;
//     cin >> s1.id;
//     cout << "学生姓名 " << s1.name << "学生ID是" << s1.id << endl;
// }

// 学生类
class Student
{
public:
    void setName(string name)
    {
        m_name = name;
    }
    void setID(int id)
    {
        m_id = id;
    }
    void showStudent()
    {
        cout << "name:" << m_name << " ID:" << m_id << endl;
    }

public:
    string m_name;
    int m_id;
};
int main()
{
    Student stu;
    stu.setName("德玛西亚");
    stu.setID(250);
    stu.showStudent();
    system("pause");
    return 0;
}

