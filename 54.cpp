//
// Created by shuho on 2021/10/2.
//

#include <iostream>
using namespace std;

class Base
{
public:
    int m_A;
protected:
    int m_B;
protected:
    int m_C;
};
class Son:public Base{
public:
    int m_D;
};

void test1(){
//    父类中
    cout << "size of son = " << sizeof(Son) << endl;
}

int main() {
    test1();
    return 0;
}