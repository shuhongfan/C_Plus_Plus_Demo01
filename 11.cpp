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
struct teacher{
    int id;
    string name;
    int age;
    struct student stu;
};
int main() {
    teacher t;
    t.id=100;
    t.name="老王";
    t.age=50;
    t.stu.name="小王";
    t.stu.age=20;
    t.stu.score=99;

    cout<<"老师的姓名："<<t.name<<" 老师的编号："<<t.id<<" 老师的年龄："<<t.age
    <<" 老师辅导的学生的姓名："<<t.stu.name <<" 学生的年龄："<<t.stu.age<<" 学生的成绩："<<t.stu.score<<endl;
    return 0;
}