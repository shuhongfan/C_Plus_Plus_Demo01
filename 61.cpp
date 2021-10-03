//
// Created by shuho on 2021/10/2.
//

#include <iostream>
using namespace std;

class Calculator
{
public:
    int getResult(string oper){
        if (oper=="+") {
            return m_Num1+m_Num2;
        }
        if (oper == "-") {
            return m_Num1-m_Num2;
        }
        if (oper == "*") {
            return m_Num1 * m_Num2;
        }
        if (oper == "/") {
            return m_Num1 / m_Num2;
        }
    }
    int m_Num1,m_Num2;
};

void test1() {
    Calculator c;
    c.m_Num1=10;
    c.m_Num2=10;

    cout<<c.m_Num1<<"+"<<c.m_Num2<<"="<<c.getResult("+")<< endl;
    cout<<c.m_Num1<<"-"<<c.m_Num2<<"="<<c.getResult("-")<< endl;
    cout<<c.m_Num1<<"*"<<c.m_Num2<<"="<<c.getResult("*")<< endl;
    cout<<c.m_Num1<<"/"<<c.m_Num2<<"="<<c.getResult("/")<< endl;
}

class AbstractCalculator
{
public:
    virtual int getResult()
    {
        return 0;
    }
    int m_Num1;
    int m_Num2;
};
class AddCalculator :public AbstractCalculator
{
    int getResult(){
        return m_Num1 + m_Num2;
    }
};
class SubCalculator :public AbstractCalculator
{
    int getResult(){
        return m_Num1 - m_Num2;
    }
};
class MulCalculator :public AbstractCalculator
{
    int getResult(){
        return m_Num1 * m_Num2;
    }
};
class DivCalculator :public AbstractCalculator
{
    int getResult(){
        return m_Num1 / m_Num2;
    }
};

void test2(){
    AbstractCalculator *abc = new AddCalculator;
    abc ->m_Num1=10;
    abc-> m_Num2 = 10;
    cout<<abc -> m_Num1 << "+" << abc -> m_Num2 << "=" <<abc->getResult() << endl;
    delete abc;

    abc = new SubCalculator;
    abc ->m_Num1=10;
    abc-> m_Num2 = 10;
    cout<<abc -> m_Num1 << "-" << abc -> m_Num2 << "=" <<abc->getResult() << endl;
    delete abc;

    abc = new MulCalculator;
    abc ->m_Num1=10;
    abc-> m_Num2 = 10;
    cout<<abc -> m_Num1 << "*" << abc -> m_Num2 << "=" <<abc->getResult() << endl;
    delete abc;

    abc = new DivCalculator;
    abc ->m_Num1=10;
    abc-> m_Num2 = 10;
    cout<<abc -> m_Num1 << "/" << abc -> m_Num2 << "=" <<abc->getResult() << endl;
    delete abc;
}

int main() {
//    test1();
    test2();
    return 0;
}


