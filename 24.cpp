//
// Created by shuho on 2021/9/26.
//

#include <iostream>
using namespace std;

void func(int a,int =20){
    cout << "this is func" << endl;
}

int main() {
    func(10,10);
    return 0;
}