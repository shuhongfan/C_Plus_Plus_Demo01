//
// Created by shuho on 2021/10/2.
//

#include <iostream>
using namespace std;

class MyPrint
{
    public :
//    重载的函数调用运算符
    void operator()(string test)
    {
        cout << test << endl;
    }
};

void MyPrint2(string test)
{
    cout << test << endl;
}

class MyAdd{
public:
    int operator()(int n1,int n2) {
        return n1+n2;
    }
};

void test1(){
    MyPrint myPrint;
//    仿函数
    myPrint("hello world");

    MyPrint2("java");
}

void test2(){
    MyAdd myAdd;
    cout << myAdd(5,6) << endl;

//    匿名函数对象
    cout << MyAdd()(100,100) << endl;
}

int main() {
    test1();
    test2();
    return 0;
}