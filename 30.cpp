//
// Created by shuho on 2021/9/26.
//

#include <iostream>
using namespace std;

class C1
{
    int m_A;//默认权限是私有
};
struct C2{
    int m_A; //默认权限是公共
};
int main() {
    C1 c1;
//    c1.m_A=100;

    C2 c2;
    c2.m_A=100;

    return 0;
}