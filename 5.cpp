//
// Created by SHF on 2021/9/12.
//

#include <iostream>
using namespace std;

int main() {
    int a1=10;
    int b1=3;

    cout << a1+b1 << endl;
    cout << a1-b1 << endl;
    cout << a1*b1 << endl;
    cout << a1/b1 << endl;  

    int a2=10;
    int b2=20;
    cout << a2/b2 << endl; //0  两个整数相除依然是整数

    int a3=10;
    int b3=0;
//    cout << a3/b3 << endl; // 报错  除数不可为0
    
    double d1=0.5;
    double d2=0.22;
    cout << d1/d2 << endl;

    
    int a4=10;
    int b4=3;
    cout << a4%b4 << endl;

    int a5=10;
    int b5=20;
    cout << a5%b5 << endl;
    
    int a6=10;
    int b6=0;
//    cout << a6/b6 << endl;
    
    double d3=3.14;
    double d4=3.3;
    cout << d3/d4 << endl;
    return 0;
}