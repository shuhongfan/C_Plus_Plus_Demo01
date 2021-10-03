//
// Created by shuho on 2021/10/1.
//

#include <iostream>
using namespace std;

class Person{
    public :
    Person(int age){
//        this指针指向 被调用的成员函数 所属的对象
        this->age = age;
    }
    int age;
    Person& PersonAddAge(Person &p){
        this -> age += p.age;
//        this指向p2的指针 *this指向的就是p2这个对象本体
        return *this;
    }
};

void test1(){
    Person p(20);
    cout << "p="<<p.age << endl;
}
void test2(){
    Person p1(10);
    Person p2(10);

//    链式编程
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

    cout << "p2的年龄为"<<p2.age << endl;
}
int main() {
    test2();
    return 0;
}