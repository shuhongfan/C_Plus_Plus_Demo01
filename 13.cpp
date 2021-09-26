//
// Created by shuho on 2021/9/26.
//

#include <iostream>
using namespace std;

struct student{
    string  name;
    int age;
    int score;
};

void printStudent(student *s);

int main() {
    struct student s={"张三",15,70};
    printStudent(&s);
    return 0;
}

//将函数中的形参修改为指针，可以减少内存空间，而且不会复制一份出来
void printStudent(const student *s) {
//    s->age=150;  加const 防止函数体中的误操作
    cout << "姓名：" << s->name << " 年龄：" << s->age << " 成绩：" << s->score << endl;
}
