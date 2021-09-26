//
// Created by shuho on 2021/9/26.
//

#include <iostream>
using namespace std;

class Person{
public:
//    构造函数 没有返回值，不写void；函数名与类名相同； 可以有多个参数，可以重载； 创建对象会自动调用； 不实现编辑器自动提供；
    Person(){
        cout << "Person() 无参构造函数调用" << endl;
    }
    Person(int a){
        age=a;
        cout << "Person(int a) 有参构造函数调用" << endl;
    }

//    拷贝构造函数
    Person(const Person &p){
//        将传入的人身上的所有属性，拷贝到我身上
        age=p.age;
        cout << "Person(const Person &p) 拷贝构造函数调用" << endl;
    }

//    析构函数 没有返回值，不写void；函数名与类名相同，前面添加~； 不能有参数，不能重载； 释放对象会自动调用； 不实现编辑器自动提供；
    ~Person(){
        cout << "~Person() 析构函数" << endl;
    }

    int age;
};

void test01(){
//    括号法
    Person p1;
    Person p2(10);
    cout << "p2的年龄为：" << p2.age << endl;
    Person p3(p2);
    cout << "p3的年龄为：" << p3.age << endl;

//    显示法
    Person p4;
    Person p5=Person(10);
    Person p6=Person(p5);
    Person(10);

//    隐式转换法
    Person p7=10;
    Person p8=p7;
}
int main() {
    test01();
    return 0;
}