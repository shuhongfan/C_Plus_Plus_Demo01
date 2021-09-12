//
// Created by SHF on 2021/9/12.
//

#include <iostream>
using namespace std;

int main() {
    int a2=10;
    int b2=a2++*10;
    cout << "a2="<<a2 << endl;
    cout << "b2="<<b2 << endl;
    
    int a=10;
    cout << "a="<<a << endl;
    a=100;
    cout << "a="<<a << endl;
    
    a=10;
    a/=2;
    cout << "a="<<a << endl;
    return 0;
}