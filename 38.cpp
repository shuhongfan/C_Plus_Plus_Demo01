//
// Created by shuho on 2021/10/1.
//

#include <iostream>
using namespace std;

class Phone{
    public :
    Phone(string pName):m_PName(pName){
        cout << "Phone构造函数调用" << endl;
    }
    ~Phone(){
        cout << "Phone析构函数调用" << endl;
    }
    string m_PName;
};

class Person{
public:
    Person(string name,string pName):m_Name(name), m_Phone(pName){
        cout << "Person构造函数调用" << endl;
    }
    ~Person(){
        cout << "Person的析构函数调用" << endl;
    }
//    姓名
    string m_Name;
//    手机
    Phone m_Phone;
};

//当其他类对象作为本类成员,构造
void test01(){
    Person p("张三","iphone X");
    cout << p.m_Name << p.m_Phone.m_PName << endl;
}

int main() {
    test01();
    return 0;
}