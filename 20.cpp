//
// Created by shuho on 2021/9/26.
//

#include <iostream>
using namespace std;

// 值传递
void swap01(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}

// 地址传递
void swap02(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

// 引用传递 形参会修饰实参 给变量起别名
void swap03(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main() {
    int a=10;
    int b=20;
    swap01(a,b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    swap02(&a,&b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    swap03(a,b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    return 0;
}