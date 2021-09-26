//
// Created by shuho on 2021/9/26.
//

#include <iostream>
using namespace std;

int* func(){
//    局部变量，存放在栈区，栈区的数据在函数执行完后自动释放
    int a=10;
    return &a;
}
int * func2(){
//    利用new关键字，可以将数据开辟到堆区
//    new返回的是 该数据类型的指针
    int *p = new int(10);   
    return p;
}

void test02(){
    int *arr = new int[10];
    for (int i = 0; i < 10; ++i){
        arr[i]=i+100;
    }
    for (int i = 0; i < 10; ++i){
        cout << arr[i] << endl;
    }
//    释放数组
    delete [] arr;
}

int main() {
    int *p = func();
    cout << *p << endl; // 第一次可以打印正确的数字是因为编译器做了保留
    cout << *p << endl; // 返回局部变量的地址

    int *p2 = func2();
    cout << *p2 << endl;
    cout << *p2 << endl;
    delete p;
    cout << *p2 << endl;
    cout << *p2 << endl;

    test02();

    return 0;
}