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
    struct Student stuArray[3]{
            {"张三",22,89},
            {"李四",25,99},
            {"王五",58,20}
    };
    stuArray[2].name="赵六";
    stuArray[2].age=80;
    stuArray[2].age=5;

    for (int i = 0; i <3; ++i) {
        cout<<"姓名："<<stuArray[i].name<<"\t年龄:"<<stuArray[i].age<<"\t成绩："<<stuArray[i].score<<endl;
    }
    return 0;
}