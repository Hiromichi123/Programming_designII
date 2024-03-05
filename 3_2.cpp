#include <iostream>
#include <string>    // 包含字符串处理的头文件

class Car
{
private:
    std::string brand;  // 汽车品牌
    std::string type;   // 汽车型号
    int year;           // 出厂年份
    double price;       // 价格

public:
    Car(std::string brand = "undefinition", std::string type = "undefinition", int year = 2000, double price = 0.0)
    {
        this->brand = brand;
        this->type = type;
        this->year = year;
        this->price = price;
    }

    std::string GetBrand() {  // 获取私有成员变量汽车品牌
        return brand;
    }

    std::string GetType() {   // 获取私有成员变量汽车型号
        return type;
    }

    int GetYear() {           // 获取私有成员变量出厂年份
        return year;
    }

    double GetPrice() {       // 获取私有成员变量价格
        return price;
    }
};

int main()
{
    Car car1("FIAT", "Palio", 2007, 6.5);  // 创建第一辆车对象
    std::cout << car1.GetBrand() << "|" << car1.GetType() << "|" << car1.GetYear() << "|" << car1.GetPrice() << std::endl;  // 输出第一辆车信息
    Car car2;  // 创建第二辆车对象
    std::cout << car2.GetBrand() << "|" << car2.GetType() << "|" << car2.GetYear() << "|" << car2.GetPrice() << std::endl;  // 输出第二辆车信息
    return 0;
}