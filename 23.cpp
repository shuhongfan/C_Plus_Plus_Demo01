//
// Created by shuho on 2021/9/26.
//

#include <iostream>
using namespace std;

int func(int a,int b=20,int c=30){
    return a+b+c;
}
//声明和实现只能有一个默认参数
int func2(int a=10,int b=10);
int func2(int a,int b){
    return a+b;
}
int main() {
    cout << func(10,30) << endl;
    return 0;
}