#import <Foundation/Foundation.h>

@interface Student:NSObject
{
    @public
    NSString *_name;
    int _age;
    int _yuWen;
    int _shuXue;
    int _yingYu;
}
@end

@implementation Student
@end

int main(){
    Student *s1=[Student new];
    s1->_name=@"小花";
    s1->_age=17;
    s1->_yuWen=100;
    s1->_shuXue=99;
    s1->_yingYu=88;

    NSLog(@"s1对象的姓名是 %@,年龄是 %d, 语文是 %d ,数学是 %d, 英语是 %d",
          s1->_name,s1->_age,s1->_yuWen,s1->_shuXue,s1->_yingYu);
}