//
// Created by shuho on 2021/9/26.
//

#include <iostream>
using namespace std;

//const修饰形参
void showValue(const int &val){
//    val=1000;
    cout << "val=" << val << endl;
}
int main() {
    int a=10;
//    加上const之后 int temp=10; const int & ref=temp;
//    const int & ref=10;

    showValue(a);
    cout << "a=" << a << endl;
    return 0;
}