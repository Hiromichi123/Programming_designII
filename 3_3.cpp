#include<iostream>
#include<string>

class Student
{
  private:
    int age;
    std::string name;
  
  public:
    Student(int a, std::string m) : age(a), name(m) {}  // 带参数的构造函数
    Student() : age(0), name("unnamed") {}              // 不带参数的构造函数
  
    void SetMember(int a, std::string m) {  // 改变数据成员值的函数
        age = a;
        name = m;
    }
  
    int Getage()
    {
      return age;
    }
  
    std::string Getname()
    {
      return name;
    }
  
};

int main( )
{
  Student stu[3]={Student(13,"wang"), Student(), Student()} ;   /*第一个元素用带参构造函数初始化；第二、三个元素由无参构造函数初始化，默认年龄为 0 ，姓名为 "unnamed"*/
  stu[2].SetMember(12,"zhang");           /*修改第三个元素的数据成员值*/
  
  for(int i=0;i<3;i++)
  {
    std::cout<<stu[i].Getage( )<<","<<stu[i].Getname( )<<"\n";
  }
  return 0;
}