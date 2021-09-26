//
// Created by shuho on 2021/9/26.
//

#include <iostream>
using namespace std;

struct student{
    string name;
    int age;
    int score;
};

void printStudent1(student stu);

void printStudent2(student *p);

int main() {
    struct student s;
    s.name="张三";
    s.age=20;
    s.score=85;

//    值传递
    printStudent1(s);
//    地址传递
    printStudent2(&s);

    cout << "main函数中 姓名：" << s.name << " main函数中 年龄：" << s.age << " main函数中 成绩：" << s.score<< endl;
    return 0;
}

void printStudent2(student *p) {
    p->age=200;
    cout << "子函数2中 姓名：" << p->name << " 子函数2中 年龄：" << p->age << " 子函数2中 成绩：" << p->score<< endl;
}

void printStudent1(student stu) {
    stu.age=100;
    cout << "子函数1中 姓名：" << stu.name << " 子函数1中 年龄：" << stu.age << " 子函数1中 成绩：" << stu.score<< endl;
}
