//
// Created by SHF on 2021/9/12.
//

#include <iostream>
#include <ctime>

using namespace std;

int main() {
//    1. 生成随机数
    srand((unsigned int ) time(NULL));
    int num=rand()%100+1;
    cout << "请输入你猜的数字:" << endl;
    int val=0;
    while (true){
        cin>>val;
        if (val>num) cout << "猜的过大" << endl;
        else if (val<num) cout << "猜的过小" << endl;
        else {
            cout << "猜对了！！！" << endl;
            break;
        }
    }
    
//    cout << num << endl;

    return 0;
}