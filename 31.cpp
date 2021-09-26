//
// Created by shuho on 2021/9/26.
//

#include <iostream>
using namespace std;

class Person{

public:
    void setName(string name){
        m_Name=name;
    }
    string getName(){
        return m_Name;
    }
    int getAge(){
        return m_Age;
    }
    void setAge(int age){
        if (age<0 || age>150){
            cout << "您输入年龄有误" << endl;
            return;
        }
        m_Age=age;
    }
    void setLover(string lover){
        m_Lover=lover;
    }
private:
    string m_Name;
    int m_Age;
    string m_Lover;
};

int main() {
    Person p;
    p.setName("张三");
    cout << "姓名为：" << p.getName() << endl;
    cout << "年龄为：" << p.getAge() << endl;
    return 0;
}