//
// Created by shuho on 2021/9/26.
//

#include <iostream>
using namespace std;
class Person{
public:
    Person(){
        cout << "Person默认构造函数调用" << endl;
    }
    ~Person(){
        cout << "Person的析构函数调用" << endl;
    }
    Person(int age){
        cout << "Person的有参函数调用" << endl;
        m_Age=age;
    }
    Person(const Person &p){
        cout << "Person的拷贝构造函数调用" << endl;
        m_Age=p.m_Age;
    }
    int m_Age;
};

void test01(){
    Person p1(20);
    Person p2(p1);
    cout << "p2的年龄为："  << p2.m_Age<< endl;
}


void doWork(Person p){

}
void test02(){
    Person p;
    doWork(p);//值传递
}

Person doWork2(){
    Person p1;
    return p1;
}
void test03(){
    Person p = doWork2();
}

int main() {
//    test01();
//    test02();
    test03();
    return 0;
}