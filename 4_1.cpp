#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int age;
    string name;

public:
    static int count; // 去掉赋值符号，声明静态成员变量
    Student(int m, string n)
    {
        this->age = m;
        this->name = n;
        count++; // 每次创建对象时递增count
    }

    Student()
    {
        this->age = 0;
        this->name = "unnamed";
        count++; // 每次创建对象时递增count
    }
  
    ~Student()
    {
        count--; //每次删除对象时递减count
    }

    void Print() const // 去掉 const 后面的空格
    {
        cout << "count=" << count << endl;
        cout << name << "  " << age << endl;
    }
};

int Student::count = 0; // 静态成员变量初始化

int main()
{
    cout << "count=" << Student::count << endl;
    string stuname = "ZhangHong";
    Student s1, *p = new Student(23, stuname); //同时实例化两个学生对象
    s1.Print();
    p->Print();
    delete p;
    s1.Print();
    Student Stu[4];
    cout << "count=" << Student::count << endl;
    return 0;
}