#include <iostream>

int main() {
    int num;
    std::cin >> num; // 输入数字数量

    if (num > 20 || num < 1) { // 如果输入数量大于20或小于1，则输出错误信息
        std::cout << "number error." << std::endl;
        return 0;
    }

    int* arr = new int[num]; // 动态分配存储空间

    // 输入数字
    for (int i = 0; i < num; i++) {
        std::cin >> arr[i];
    }

    int positive = 0, negative = 0;
    // 统计正数和负数的个数
    for (int i = 0; i < num; i++) {
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        }
    }

    // 输出统计结果
    std::cout << "There are " << num << " figures," << std::endl;
    std::cout << positive << " of them are positive numbers," << std::endl;
    std::cout << negative << " of them are negatives." << std::endl;

    delete[] arr; // 释放动态分配的内存

    return 0;
}