//
// Created by shuho on 2021/10/2.
//

#include <iostream>
using namespace std;

class Base
{
public:
    static int m_A;
    static void func(){
        cout << "Base--func" << endl;
    }
};
int Base::m_A=100;

class Son:public Base
{
public:
    static int m_A;
    static void func(){
        cout << "Son--func" << endl;
    }
};
int Son::m_A = 200;

//同名静态成员属性
void test01(){
    Son s;
    cout << "m_A=" << s.m_A << endl;
    cout << "m_A=" << s.Base::m_A << endl;
    cout << "m_A=" << Son::m_A << endl;
//    第一个：：代表通过类名方式访问 第二个：：代表访问父类作用域下
    cout << "m_A=" << Son::Base::m_A << endl;
}

void test02(){
    Son s;
    s.func();
    s.Base::func();

    Son::func();
//    子类出现和父类同名静态成员函数 也会隐藏父类中所有的同名成员函数
    Son::Base::func();
}

int main() {
    test01();
    test02();
    return 0;
}