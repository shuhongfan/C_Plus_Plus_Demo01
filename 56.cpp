//
// Created by shuho on 2021/10/2.
//

#include <iostream>
using namespace std;

class Base
{
public:
    Base(){
        m_A=100;
    }
    void func(){
        cout << "Base-func()调用" << endl;
    }
    void func(int a){
        cout << "Base-func(int a)调用" << endl;
    }
    int m_A;
};
class Son:public Base
{
public:
    Son() {
        m_A = 10;
    }
    void func(){
        cout<<"son-func()调用" <<endl;
    }
    void func(int a){
        cout << "son-func(int a)调用" << endl;
    }
    int m_A;
};

void test1(){
    Son s;
    cout << s.m_A << endl;
//    如果通过子类对象 访问父类的同名属性
    cout << s.Base::m_A << endl;
}

void test2(){
    Son s;
//    直接调用 调用的是子类中同名成员
    s.func();
    s.Base::func();

    s.func(10);
    s.Base::func(100);
}

int main() {
    test1();
    test2();
    return 0;
}