//
// Created by shuho on 2021/10/2.
//

#include <iostream>
using namespace std;

class Base1
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son1:public Base1
{
public:
    void func(){
        m_A=10; // 父类中的公共权限成员 到子类中依然是公共权限
        m_B = 10; // 父类中的保护权限成员 到子类中依然是保护权限
//        m_C=10;  父类中私有权限 子类无法访问
    }
};

void test1() {
    Son1 s1;
    s1.m_A=100;
//    s1.m_B = 100; m_B是保护权限 类外访问不到
}


class Base2
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};
class Son2:protected Base2{
public:
    void func(){
        m_A=100; // 父类中公共成员，到子类中变成保护权限
        m_B = 10; // 父类中保护成员，到子类中变成保护权限
//        m_C=100; // 父类中私有成员 子类访问不到
    }
};

void test2(){
    Son2 s2;
//    s2.m_A = 100; m_A为保护权限 类外访问不到
//    s2.m_B = 100; m_B为保护权限  不可访问
//    s2.m_C = 100;
}


class Base3
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};
class Son3:private Base3 {
public:
    void func() {
        m_A=100;  // 父类中公共成员 到子类变为私有成员
        m_B = 10; // 父类中保护成员 到子类变为 私有成员
//        m_C=100; 父类中私有成员  子类访问不到
    }
};

class GrandSon3:public Son3 {
public:
    void func() {
//        m_A = 100;
//        m_B = 10;
    }
};

int main() {
    test1();
    return 0;
}