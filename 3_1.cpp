#include<iostream>

class Cube
{
public:
    int l, w, h; // 立方体的长、宽、高

    Cube(int l, int w, int h) // 带参数的构造函数，用于初始化立方体的长宽高
    {
        this->l = l; // 使用this指针来区分成员变量和参数
        this->w = w;
        this->h = h;
    }

    Cube() // 无参数的构造函数，默认将长宽高初始化为3、2、1
    {
        this->l = 3;
        this->w = 2;
        this->h = 1;
    }

    int Compute() // 计算立方体体积的方法
    {
        return l * w * h;
    }
};

int main()
{
    int l, w, h;
    std::cout << "输入立方体的长宽高：" << std::endl;
    std::cin >> l >> w >> h;
    Cube A(l, w, h); // 创建一个Cube对象A，并使用用户输入的长宽高进行初始化
    Cube B; // 创建另一个Cube对象B，使用默认构造函数初始化为3、2、1
    std::cout << A.Compute() << std::endl;
    std::cout << B.Compute() << std::endl;

    return 0;
}