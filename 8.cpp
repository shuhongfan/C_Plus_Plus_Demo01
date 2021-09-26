//
// Created by SHF on 2021/9/12.
//

#include <iostream>
using namespace std;

//自定义数据类型
struct Student{
    string name;
    int age;
    int score;
}s3;

int main() {
    struct Student s1;
    s1.name="这是你";
    s1.age=20;
    s1.score=99;
    cout<<"姓名："<<s1.name<<"\t年龄:"<<s1.age<<"\t成绩："<<s1.score<<endl;

    struct  Student s2={"李四",22,58};
    cout<<"姓名："<<s2.name<<"\t年龄:"<<s2.age<<"\t成绩："<<s2.score<<endl;

    s3.name="这是你";
    s3.age=20;
    s3.score=99;
    cout<<"姓名："<<s3.name<<"\t年龄:"<<s3.age<<"\t成绩："<<s3.score<<endl;
    return 0;
}