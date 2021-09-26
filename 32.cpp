//
// Created by shuho on 2021/9/26.
//

#include <iostream>
using namespace std;
class Cube{
private:
    int m_L;
    int m_W;
    int m_H;
public:
    int getML() const {
        return m_L;
    }

    void setML(int mL) {
        m_L = mL;
    }

    int getMW() const {
        return m_W;
    }

    void setMW(int mW) {
        m_W = mW;
    }

    int getMH() const {
        return m_H;
    }

    void setMH(int mH) {
        m_H = mH;
    }

    int calculateS(){
        return 2*m_L*m_W+2*m_W*m_H+2*m_L*m_H;
    }

    int calculateV(){
        return m_L*m_W*m_H;
    }

//    成员函数只需要传入一个参数
    bool isSameByClass(Cube &c){
        if (m_L==c.getML() && m_W==c.getMW() && m_H==c.getMH()){
            return true;
        }
        return false;
    }
};

bool isSame(Cube &c1,Cube &c2){
    if (c1.getMH()==c2.getMH() && c1.getML()==c2.getML() && c1.getMW()==c2.getMW()){
        return true;
    }
    return false;
}
int main() {
    Cube c1;
    c1.setML(10);
    c1.setMH(10);
    c1.setMW(10);
    cout << "c1的面积为：" << c1.calculateS() << endl;
    cout << "c1的体积为：" << c1.calculateV() << endl;

    Cube c2;
    c2.setML(10);
    c2.setMH(10);
    c2.setMW(10);
    cout << "c2的面积为：" << c2.calculateS() << endl;
    cout << "c2的体积为：" << c2.calculateV() << endl;

    bool ret = isSame(c1, c2);
    if (ret) cout << "c1和c2是相等的" << endl;
    else cout << "c1和c2是不相等的" << endl;

    bool b = c1.isSameByClass(c2);
    if (b) cout << "c1和c2是相等的" << endl;
    else cout << "c1和c2是不相等的" << endl;
    return 0;
}