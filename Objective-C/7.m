#import <Foundation/Foundation.h>

@interface Person:NSObject
{
    @public
    NSString *_name;
    int _age;
}
-(void) sayHi;
@end

@implementation Person
-(void) sayHi
{
    NSLog(@"大家好，我叫 %@，我今年 %d 岁",_name,_age);
}
@end


int main(){
    Person *p1 = [Person new];
    p1->_name = @"小花";
    Person *p2 = p1;
    p2->_name = @"小明";

    p2 = [Person new];
}

