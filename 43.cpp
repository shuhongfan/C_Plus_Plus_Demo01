//
// Created by shuho on 2021/10/1.
//

#include <iostream>
using namespace std;

class Person{
    public :
//    this指针的本质 就是指针常量  指针的指向是不可以修改的
    void showPerson() const // 常函数
    {
//        m_A=100;
        m_B=100;
//        this=NULL;
    }
    int m_A;
    mutable int m_B;
};

void test1(){
    Person p;
    p.showPerson();
}

void test2(){

}

int main() {
    test1();
    test2();
    return 0;
}