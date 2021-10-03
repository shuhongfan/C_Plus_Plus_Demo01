//
// Created by shuho on 2021/10/2.
//

#include <iostream>
using namespace std;

class Person
{
public:
    Person(int age)
    {
        m_age=new int(age);
    }
    ~Person()
    {
        if (m_age != NULL) {
            delete m_age;
            m_age=NULL;
        }
    }
//    重载 赋值 运算符
    Person& operator=(Person &p){
//        编译器提供的是浅拷贝
//        m_age = p.m_age;

//        判断是否有属性在堆区 如果有先释放干净,然后再深拷贝
        if (m_age!=NULL){
            delete m_age;
            m_age=NULL;
        }
        m_age=new int(*p.m_age);
        return *this;
    }
    int *m_age;
};

void test1(){
    Person p1(18);
    Person p2(20);
    Person p3(30);
    p3=p2=p1;
    cout <<  *p1.m_age << endl;
    cout <<  *p2.m_age << endl;
    cout <<  *p3.m_age << endl;
}

int main() {
    test1();

    int a=10;
    int b = 20;
    int c= 30;
    c=b=a;
    return 0;
}