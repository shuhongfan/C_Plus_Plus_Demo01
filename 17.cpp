//
// Created by shuho on 2021/9/26.
//

#include <iostream>
using namespace std;


int c = 10;
int d= 10;

const int g = 10;

int main() {
//    全局区
//    全局变量、静态变量、常量
    int a=10;
    int b=10;
    cout << "局部变量a的地址为：" << &a << endl;
    cout << "局部变量b的地址为：" << &b << endl;

    cout << "全局变量c的地址为：" << &c << endl;
    cout << "全局变量d的地址为：" << &d << endl;

    static int e=10;
    static int f=10;
    cout << "静态变量e的地址为：" << &e << endl;
    cout << "静态变量f的地址为：" << &f << endl;

//    字符串常量
    cout << "字符串常量地址：" << &"hell" << endl;

//  const修饰的变量
    cout << "全局常量地址：" << &g << endl;

    const int h = 10;
    cout << "局部常量h的地址为：" << &h << endl;

    return 0;
}