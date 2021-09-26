//
// Created by shuho on 2021/9/26.
//

#include <iostream>
using namespace std;

class Student{ // 类中的属性和行为 我们统一称为 成员
public:
    string m_Name; // 属性 成员属性 成员变量
    int m_Id;
    void showStudent(){
        cout << "姓名：" << m_Name << endl; // 行为 成员函数 成员方法
        cout << "学号：" << m_Id << endl;
    }
    void setName(string name){
        m_Name=name;
    }
    void setId(int id){
        m_Id=id;
    }
};
int main() {
    Student s1;
    s1.m_Name="张三";
    s1.m_Id=1;
    s1.showStudent();

    Student s2;
    s2.m_Name="李四";
    s2.m_Id=2;
    s2.showStudent();

    Student s3;
    s3.setName("王五");
    s3.setId(3);
    s3.showStudent();
    return 0;
}