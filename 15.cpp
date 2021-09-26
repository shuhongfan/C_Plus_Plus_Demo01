//
// Created by shuho on 2021/9/26.
//

#include <iostream>
using namespace std;

struct Hero{
    string name;
    int age;
    string sex;
};

void bubbleSort(Hero pHero[], int len) {
    for (int i = 0; i < len-1; ++i){
        for(int j=0;j<len-1-i;++j){
            if (pHero[j].age>pHero[j+1].age){
                struct Hero temp=pHero[j];
                pHero[j]=pHero[j+1];
                pHero[j+1]=temp;
            }
        }
    }
}

void printHero(Hero pHero[], int len) {
    for (int i = 0; i < len; ++i){
        cout << "姓名:" << pHero[i].name<<" 年龄："<<pHero[i].age<<" 性别："<<pHero[i].sex << endl;
    }
}

int main() {
    struct Hero heroArray[5]={
            {"刘备",23,"男"},
            {"关羽",22,"男"},
            {"张飞",20,"男"},
            {"赵云",21,"男"},
            {"貂蝉",19,"女"},
    };

    int len = sizeof heroArray / sizeof heroArray[0];
    printHero(heroArray,len);
    cout<<"-----------------"<<endl;
    bubbleSort(heroArray,len);
    printHero(heroArray,len);
    return 0;
}