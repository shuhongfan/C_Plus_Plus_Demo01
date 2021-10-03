//
// Created by shuho on 2021/10/1.
//

#include <iostream>
using namespace std;

class Building;
class GoodGay
{
public:
    GoodGay();
    void visit();

private:
    Building* building;
};

class Building
{
    friend class GoodGay;
public :
    Building();
    string m_SittingRoom;
private:
    string m_BedRoom;
};
//类外去写成员函数
Building::Building() {
    m_SittingRoom="客厅";
    m_BedRoom = "卧室";
}
GoodGay::GoodGay() {
    building=new Building();
}

void GoodGay::visit() {
    cout << "好基友正在访问：" << building->m_SittingRoom << endl;
    cout << "好基友正在访问：" << building->m_BedRoom << endl;
}

void test1(){
    GoodGay gg;
    gg.visit();
}

int main() {

    return 0;
}