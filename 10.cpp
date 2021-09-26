//
// Created by shuho on 2021/9/25.
//

#include <iostream>
using namespace std;

struct Student{
    string name;
    int age;
    int score;
};

int main() {
    struct Student s={"张三",18,100};
    struct Student *p=&s;
    cout<<"姓名："<<p->name<<" 年龄："<<p->age<<" 成绩："<<p->score<<endl;
    return 0;
}