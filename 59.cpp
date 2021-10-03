//
// Created by shuho on 2021/10/2.
//

#include <iostream>
using namespace std;

class Animal{
public:
    int m_Age;
};
//利用虚继承 解决菱形继承问题
//继承之前 加上关键字virtual变为虚继承
//Animal类成为 虚基类
class Sheep:virtual public Animal
{

};

class Tuo:virtual public Animal
{

};

class SheepTuo:public Sheep,public Tuo
{

};

void test1(){
    SheepTuo st;
    st.Sheep::m_Age=18;
    st.Tuo::m_Age=28;
    st.Sheep::m_Age=18;
//    菱形继承 两个父类拥有相同数据，需要加以作用域区分
    cout<<"st.Sheep::m_Age="<<st.Sheep::m_Age<<endl;
    cout<<"st.Tuo::m_Age"<<st.Tuo::m_Age<<endl;
}

int main() {
    test1();
    return 0;
}