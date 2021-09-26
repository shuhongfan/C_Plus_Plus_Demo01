//
// Created by shuho on 2021/9/26.
//

#include <iostream>
using namespace std;

void fun(int &a){
    cout << "void fun(int &a)的调用" << endl;
}
void fun(const int &a){
    cout << "void fun(const int &a)的调用" << endl;
}

void fun2(int a,int b){
    cout << "void fun2(int a,int b)的调用" << endl;
}
void fun2(int a){
    cout << "void fun2(int a)的调用" << endl;
}

int main() {
    int a=10; // int &a=10; 不合法
    fun(a);

    fun(10);
    return 0;
}