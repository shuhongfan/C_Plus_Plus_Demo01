//
// Created by shuho on 2021/9/26.
//

#include <iostream>
using namespace std;

int main() {
//    引用的基本语法
    int a=10;
    int &b=a; // 引用必须要初始化 引用一旦初始化后，就不可以更改了
    int c=20;
    b=c; // 赋值操作 不是更改引用
    cout << &a << "\ta=" << a << endl;
    cout << &b << "\tb=" << b << endl;
    cout << &c << "\tc=" << c << endl;
    cout << &b << "\tb=" << b << endl;

    b=100;
    cout << &a << "\ta=" << a << endl;
    cout << &b << "\tb=" << b << endl;
    return 0;
}