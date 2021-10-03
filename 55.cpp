//
// Created by shuho on 2021/10/2.
//

#include <iostream>
using namespace std;

class Base{
public:
    Base(){
        cout << "Base构造函数!"<<endl;
    }
    ~Base(){
        cout << "Base的析构函数！" <<endl;
    }
};
class Son:public Base{
public:
    Son(){
        cout << "Son构造函数!"<<endl;
    }
    ~Son(){
        cout << "Son的析构函数！" <<endl;
    }
};

void test1(){
//    Base b;
    Son s;
}

int main() {
    test1();
    return 0;
}