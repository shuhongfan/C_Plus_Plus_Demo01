//
// Created by shuho on 2021/10/2.
//

#include <iostream>
using namespace std;

class Animal
{
public:
//    虚函数  函数前面加上virtual关键字，变成虚函数，那么编译器在编译的时候就不能确定函数调用了
    virtual void speak()
    {
        cout << "动物在说话" << endl;
    }
};

class Cat:public Animal
{
public:
//    重写 函数返回值类型，函数名，参数列表完全相同
    void speak()
    {
        cout << "小猫在说话" << endl;
    }
};

class Dog:public Animal
{
public:
    void speak()
    {
        cout << "小狗在说话" << endl;
    }
};

//地址早绑定 在编译阶段确定函数地址
//1.有继承关系 2.子类重写父类中的虚函数
//父类的指针或者引用 指向子类对象
void doSpeak(Animal &animal) // Animal &animal=cat/dog;
{
    animal.speak();
}

void test1(){
    Cat cat;
    doSpeak(cat);

    Dog dog;
    doSpeak(dog);
}

void test2(){
    cout<<"size of Animal:"<<sizeof(Animal)<<endl;
}

int main() {
    test1();
    test2();
    return 0;
}