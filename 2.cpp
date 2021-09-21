//
// Created by shuho on 2021/9/12.
//
#include "iostream"

using namespace std;

int main(){
    short num1=32768;
    int num2=10;
    long num3=10;
    long long num4=10;

    float f1=3.1415926f;
    double d1=3.1415926;
    float f2=3e2;
//    cout<<"f2="<<f2<<endl;

    char ch1='a';
    cout<<ch1<<(int)ch1<<endl;
    cout<<sizeof(char)<<endl;
//    char ch2='afdsfsd';
//    cout<<ch2<<endl;

    cout<<"num1="<<num1<<endl;
    cout<<"num2="<<num2<<endl;
    cout<<"num3="<<num3<<endl;
    cout<<"num4="<<num4<<endl;
    cout<<"f1="<<f1<<endl;
    cout<<"d1="<<d1<<endl;

    cout<<"short占用的内存空间为:"<< sizeof(short)<<endl;  // 2
    cout<<"int占用的内存空间为:"<< sizeof(int)<<endl;  // 4
    cout<<"long占用的内存空间为:"<< sizeof(long)<<endl;  // 4
    cout<<"long long占用的内存空间为:"<< sizeof(long long)<<endl;  // 8
    cout<<"float占用的内存空间为:"<< sizeof(float)<<endl; // 4
    cout<<"double占用的内存空间为:"<< sizeof(double)<<endl;  // 8
}