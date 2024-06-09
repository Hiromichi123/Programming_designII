#include <iostream>

// 函数模板定义，用于交换两个变量的值
template <typename T>
void swap(T *x, T *y) {
    T temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    double a, b;
    // 从标准输入读取两个double类型的值
    std::cin >> a >> b;
    // 调用函数模板来交换a和b的值
    swap(&a, &b);
    // 输出交换后的值
    std::cout << a << " " << b << std::endl;
    return 0;
}