//
// Created by shuho on 2021/10/3.
//

#include <iostream>
using namespace std;

class Animal
{
public:
    Animal(){
        cout << "Animal构造函数调用" << endl;
    }
//    虚析构  父类指针释放子类对象
//    virtual ~Animal() {
//        cout << "Animal析构函数调用" << endl;
//    }
//    纯虚析构
    virtual ~Animal() = 0;
//    纯虚函数
    virtual void speak() = 0;
};
//纯虚析构 需要声明也需要实现
//有了纯虚析构之后,这个类也属于抽象类,无法实例化对象
Animal::~Animal() {
    cout << "Animal的纯虚析构函数调用" << endl;
}

class Cat:public Animal
{
public:
    Cat(string name)
    {
        m_Name=new string(name);
    }
    void speak()
    {
        cout << *m_Name << "小猫在说话" << endl;
    }
    ~Cat(){
        if (m_Name!=NULL){
            cout<< "Cat析构函数调用" << endl;
            delete m_Name;
            m_Name = NULL;
        }
    }
    string *m_Name;
};

void test1(){
    Animal *animal = new Cat("Tom");
    animal->speak();
//    父类指针在析构的时候 不会调用子类中析构函数
    delete animal;
}

int main() {
    test1();
    return 0;
}