#include <iostream>
using namespace std;

class shape {
public:
    virtual double volume() = 0; // 纯虚函数，用于计算几何图形的体积
};

class cylinder : public shape {
private:
    double r,h;
public:
    cylinder(double radius, double height) : r(radius), h(height) {}

    // 重写纯虚函数 volume()，计算圆柱的体积
    virtual double volume() override {
        return 3.14 * r * r * h;
    }
};

class sphere : public shape {
private:
    double r;
public:
    // 构造函数
    sphere(double radius) : r(radius) {}

    // 重写纯虚函数 volume()，计算球的体积
    virtual double volume() override {
        return (4.0 / 3.0) * 3.14 * r * r * r;
    }
};

int main() {
   shape *p;
   double  r,h;
   cout<<"input r & h："<<endl;
   cin>>r>>h;
   cylinder cy(r,h);
   sphere sp(r);
   p=&cy;
   cout<<p-> volume()<<endl;    		
   p=&sp;
   cout<<p-> volume()<<endl; 
   return 0;
}