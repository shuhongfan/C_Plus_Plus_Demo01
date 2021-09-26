//
// Created by shuho on 2021/9/26.
//
#include <iostream>
using namespace std;

//函数重载
void fun(){
    cout << "func的调用" << endl;
}
void fun(int a){
    cout << "void fun(int a)的调用" << endl;
}
void fun(double a){
    cout << "void fun(double a)的调用" << endl;
}
void fun(int b,double a){
    cout << "void fun(int b,double a)的调用" << endl;
}
void fun(double a,int b){
    cout << "void fun(double a,int b)的调用" << endl;
}


int main() {
    fun();
    fun(10);
    fun(10.0);
    fun(10.0,10);
    fun(10,10.0);

    return 0;
}
