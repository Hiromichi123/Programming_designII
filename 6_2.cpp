#include <iostream>
#include <stdlib.h>
using namespace std;

class Matrix {
private:
    int row, col;
    int *m;

public:
    Matrix(int r, int c) : row(r), col(c) {
        m = new int[row * col];
    }

    // 析构函数
    ~Matrix() {
        delete[] m;
    }

    // 矩阵加法运算符重载
    Matrix operator+(const Matrix &other) const {
        if (row != other.row || col != other.col) {
            cout << "program terminated!" << endl;
            exit(EXIT_FAILURE);
        }

        Matrix result(row, col);
        for (int i = 0; i < row * col; ++i) {
            result.m[i] = m[i] + other.m[i];
        }
        return result;
    }

    // 赋值运算符重载
    Matrix &operator=(const Matrix &other) {
        if (this == &other) return *this; // 避免自赋值

        if (row != other.row || col != other.col) {
            cout << "program terminated!" << endl;
            exit(EXIT_FAILURE);
        }

        for (int i = 0; i < row * col; ++i) {
            m[i] = other.m[i];
        }
        return *this;
    }

    // 输出矩阵
    void disp() const {
        for (int i = 0; i < row; ++i) {
            cout << '\t';
            for (int j = 0; j < col; ++j)
                cout << *(m + i * col + j) << '\t';
            cout << endl;
        }
    }

    // 输入矩阵元素
    void input() {
        cout << "请输入该矩阵元素:" << endl;
        for (int i = 0; i < row * col; ++i) {
            cin >> m[i];
        }
    }
};

int main() {
    int row_a, col_a, row_b, col_b;
    cout << "请输入am矩阵的行数和列数:" << endl;
    cin >> row_a >> col_a;
    Matrix am(row_a, col_a);
    am.input();

    cout << "请输入bm矩阵的行数和列数:" << endl;
    cin >> row_b >> col_b;
    Matrix bm(row_b, col_b);
    bm.input();

    cout << "am:" << endl;
    am.disp();
    cout << "bm:" << endl;
    bm.disp();

    Matrix cm = am + bm;
    cout << "cm=am+bm:" << endl;
    cm.disp();

    am = bm;
    cout << "am=bm:" << endl;
    am.disp();

    return 0;
}
