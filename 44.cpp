//
// Created by shuho on 2021/10/1.
//

#include <iostream>
using namespace std;

class Building
{
//    全局函数做友元
    friend void goodGay(Building *building);
public:
    Building(){
        m_SittingRoom="客厅";
        m_BedRoom = "卧室";
    }
    string m_SittingRoom;
private :
    string m_BedRoom;
};

//全局函数
void goodGay(Building *building){
    cout << "好基友的全局函数 正在访问： "<<building ->m_SittingRoom<<endl;
    cout << "好基友的全局函数 正在访问： "<<building ->m_BedRoom<<endl;
}

void test1(){
    Building building;
    goodGay(&building);
}

int main() {
    test1();
    return 0;
}