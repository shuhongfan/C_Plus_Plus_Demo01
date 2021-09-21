#import <Foundation/Foundation.h>
#import "Person.h"
#import "QuanQuan.h"

int main()
{
    Person *p1 = [Person new];

    Dog *wangcai = [Dog new];
    wangcai->_name=@"旺财";
    wangcai->_color=@"黄色";
    wangcai->_dog->_qq=[QuanQuan new];
    wangcai->_dog->_qq->_color=@"土豪金";
    wangcai->_dog->_qq->_size=10.4f;

    p1->_dog->=wangcai;
}