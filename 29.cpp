//
// Created by shuho on 2021/9/26.
//

#include <iostream>
using namespace std;

class Person{
    public://公有权限
        string m_Name;
    protected://保护权限
        string m_Car;
    private://私有权限
        int m_Password;
    public:
        void func(){
            m_Name="张三";
            m_Car="拖拉机";
            m_Password=123456;
        }
};

int main() {
    Person p1;
    p1.m_Name="李四";
//    p1.m_Car="奔驰";
//    p1.m_Password="455679"

    return 0;
}