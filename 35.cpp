//
// Created by shuho on 2021/10/1.
//

#include <iostream>
using namespace std;


class Person{
    public :
//    无参构造
    Person() {
        cout << "Person的有参构造函数调用" << endl;
    }
//    有参构造
    Person(int age){
        cout << "Person的有参构造函数调用" << endl;
        m_Age = age;
    }

//    析构函数
    ~Person() {
        cout << "Person的析构函数调用" <<endl;
    }

//    拷贝构造函数
//    Person(const Person & p){
//        cout << "Person的拷贝构造函数调用" << endl;
//        m_Age = p.m_Age;
//    }
    int m_Age;
};

void test01(){
    Person p;
    p.m_Age=18;

    Person p2(p);
    cout << "P2的年龄为：" << p2.m_Age << endl;
}

void test02(){
    Person p(28);
    cout << "P2的年龄为：" << p.m_Age <<endl;
}

int main() {
//    默认构造
//    析构函数
//    拷贝构造
    test02();
    return 0;
}