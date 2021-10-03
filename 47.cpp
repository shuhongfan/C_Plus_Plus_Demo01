//
// Created by shuho on 2021/10/1.
//

#include <iostream>
using namespace std;

class Person
{
//    友元
    friend ostream& operator<<(ostream &cout,Person &p);

public: Person(int a,int b) {
        m_A=a;
        m_B = b;
    }
private:
    int m_A;
    int m_B;
};
//全局函数重载左移运算符
ostream& operator<<(ostream &cout,Person &p){
    cout << "m_A=" <<  p.m_A << "m_B=" <<  p.m_B << endl;
    return cout;
}

void test1(){
    Person p(10,10);
//    p.m_A=10;
//    p.m_B = 10;

    cout << p;
}

int main() {
    test1();
    return 0;
}