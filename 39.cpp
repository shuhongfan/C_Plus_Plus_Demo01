//
// Created by shuho on 2021/10/1.
//

#include <iostream>
using namespace std;

class Person{
public:
//    静态成员函数
    static void func(){
        cout << "Stitic void func调用" << endl;
        m_A=100; // 静态成员函数可以访问静态成员变量
//        m_B=200; // 静态成员函数 不可以访问 非静态成员变量 无法区分到底是哪个对象的m_B
    }
    static int m_A; // 静态成员变量
    int m_B; // 非静态成员变量

private:
    static void func2(){}
};

void test1(){
//    静态成员变量两个方式
//    通过对象访问
    Person p;
    p.func();

//    通过类名访问
    Person::func();

//    静态成员函数也是有访问权限的
//    Person::func2();
}
int main() {
    test1();
    return 0;
}