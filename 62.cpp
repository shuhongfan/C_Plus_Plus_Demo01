//
// Created by shuho on 2021/10/3.
//

#include <iostream>
using namespace std;

class Base
{
public:
//    纯虚函数 只要有一个纯虚函数，这个类成为抽象类
//    抽象类无法实例化对象
    virtual void func()=0;
};

class Son: public Base
{
public:
    virtual void func() {
        cout << "son func" << endl;
    };
};

void test1(){
//    Base b;
//    new Base();

//    Son s;

    Base *base = new Son();
    base -> func();
}

int main() {
    test1();
    return 0;
}