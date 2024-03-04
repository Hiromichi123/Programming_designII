#include <iostream>
#define pi 3.14159 // 定义圆周率

class circle
{
public:
    double r, c, s; // 半径、周长、面积

    void calculate()
    {
        this->c = 2 * pi * this->r; // 计算周长
        this->s = pi * this->r * this->r; // 计算面积
    }
};

int main()
{
    circle c1;
    std::cin >> c1.r; // 输入半径
    c1.calculate(); // 计算周长和面积
    std::cout << "s=" << c1.s << ", c=" << c1.c << std::endl; // 输出面积和周长
    return 0;
}