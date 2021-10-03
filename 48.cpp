//
// Created by shuho on 2021/10/1.
//

#include <iostream>
using namespace std;

class MyInteger
{
    friend ostream& operator<<(ostream& cout,MyInteger myint);
public:
    MyInteger(){
        m_Num=0;
    }
//    重载前置++运算符  返回引用
    MyInteger& operator++()
    {
        m_Num++;
//        返回自身
        return *this;
    }
//    重载后置++运算符  返回值
    MyInteger operator++(int)
    {
//        先 记录当时结果
        MyInteger temp = *this;
//        递增
        m_Num++;
        return temp;
    }

private:
    int m_Num;
};

//重载<<运算符
ostream& operator<<(ostream& cout,MyInteger myint)
{
    cout << myint.m_Num;
    return cout;
}


void test1(){
    MyInteger myInteger;
    cout << ++myInteger << endl;
}

void test2(){
    MyInteger myInteger;
    cout << myInteger++ << endl;
    cout << myInteger << endl;
}

int main() {
    test1();
    test2();
    return 0;
}