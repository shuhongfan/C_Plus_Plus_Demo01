//
// Created by shuho on 2021/9/26.
//
#include <iostream>
using namespace std;
#define PI 3.14

class Circle{
public: // 访问权限
    int m_r; // 属性 变量
    double calculateZC(){ // 行为 函数
        return 2*PI*m_r;
    }
};

int main() {
    Circle c1;
    c1.m_r=10;
    cout << "圆的周长为：" << c1.calculateZC() << endl;

    return 0;
}