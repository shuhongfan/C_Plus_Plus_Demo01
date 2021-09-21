#import <Foundation/Foundation.h>

//类声明
@interface Person:NSObject
{
    @public
//    属性一定要使用下划线开头
    NSString *_name;
    int _age;
    float _height;
}
@end

//类实现
@implementation Person

@end


int main(){
//    实例化对象
    Person *p1=[Person new];
//    给对象赋值
    p1->_name=@"jack";
    p1->_age=19;
    p1->_height=178.5f;

    (*p1)._name=@"jack";
    (*p1)._age=19;
    (*p1)._height=178.5f;
//    访问对象的属性
    NSLog(@"p1对象的_name属性值：%@",p1->_name);


    print("Hi......");
    NSLog(@"Hello,World");

    NSString *str=@"jack";
    NSLog(@"大家好，我是%@",str);

    Boolean b1;
}