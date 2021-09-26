//
// Created by shuho on 2021/9/26.
//

#include <iostream>
#include <ctime>

using namespace std;

struct Student{
    string sName;
    int score;
};

struct Teacher{
    string tName;
    struct Student sArray[5];
};
void allocateSpace(struct Teacher tArray[],int len){
    srand((unsigned int)time(NULL));

    string nameSeed = "ABCDE";
    for (int i = 0; i < len; ++i){
        tArray[i].tName="Teacher_";
        tArray[i].tName+=nameSeed[i];

        for (int j = 0; j < 5; ++j){
            tArray[i].sArray[j].sName="Student_";
            tArray[i].sArray[j].sName+=nameSeed[j];

            tArray[i].sArray[j].score=rand()%61+40;
        }
    }
}

void printInfo(struct Teacher tArray[], int len) {
    for (int i = 0; i < len; ++i){
        cout << "老师的姓名：" << tArray[i].tName << endl;
        for (int j = 0; j < 5; ++j) {
            cout << "\t学生姓名：" << tArray[i].sArray[j].sName << " 考试分数：" << tArray[i].sArray[j].score << endl;
        }
    }
}

int main() {
    struct Teacher tArray[3];
    int len = sizeof tArray / sizeof tArray[0];
    allocateSpace(tArray,len);
    printInfo(tArray,len);
    return 0;
}