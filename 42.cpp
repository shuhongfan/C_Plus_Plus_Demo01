//
// Created by shuho on 2021/10/1.
//

#include <iostream>
using namespace std;

class Person{
public:
    void showClassName(){
        if (this==NULL) return;
        cout << "this is person class" << endl;
    }
    void showPersonAge(){
        cout << "age=" << m_Age << endl;
    }
    int m_Age;
};

void test1(){
    Person *p =NULL;
    p->showClassName();
    p->showPersonAge();
}

int main() {
    test1();
    return 0;
}