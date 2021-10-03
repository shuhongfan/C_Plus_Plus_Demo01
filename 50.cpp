//
// Created by shuho on 2021/10/2.
//

#include <iostream>
using namespace std;

class Person
{
public:
    Person(string name,int age)
    {
        m_name=name;
        m_Age=age;
    }
//    重载 == 号
    bool operator==(Person &p){
        if (this-> m_name == p.m_name && this -> m_Age == p.m_Age) {
            return true;
        }
        return false;
    }
    bool operator!=(Person & p)
    {
        if (this -> m_name != p.m_name || this -> m_Age != p.m_Age)
            return true;
        return false;
    }

    string m_name;
    int m_Age;
};

void test1(){
    Person p1("tom",18);
    Person p2("11",18);

    if (p1 == p2) cout << "p1 == p2" <<endl;
    if (p1 != p2) cout << "p1 != p2" <<endl;
}

int main() {
    test1();
    return 0;
}