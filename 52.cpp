//
// Created by shuho on 2021/10/2.
//

#include <iostream>
using namespace std;

class BasePage{
public:
    void header(){
        cout << "公共头部" << endl;
    }
    void footer(){
        cout << "公共底部" << endl;
    }
    void left(){
        cout << "公共分类列表" << endl;
    }
    void content(){
        cout << "JAVA学科视频" << endl;
    }
};

class JAVA:public BasePage
{
    public :
    void content(){
        cout << "JAVA学科视频" << endl;
    }
};
class Python:public BasePage
{
    public :
    void content(){
        cout << "Python学科视频" << endl;
    }
};
class c:public BasePage
{
public :
    void content(){
        cout << "c++学科视频" << endl;
    }
};

void test1(){
    JAVA java;
    java.header();
    java.footer();
    java.left();
    java.content();

    Python python;
    python.header();
    python.footer();
    python.left();
    python.content();

    c c;
    c.header();
    c.footer();
    c.left();
    c.content();
}

int main() {
    test1();
    return 0;
}