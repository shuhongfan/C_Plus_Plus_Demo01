#import <Foundation/Foundation.h>

@interface Person:NSObject
{
    NSString *_name;
    int _age;
}
-(void) syaHi;
@end

@implementation Person
-(void) syaHi
{
    NSLog(@"大家好,我叫%@，今年%d岁,下课还早呢！！",_name,_age);
}
@end


int main(){
    Person *p1=[Person new];
    p1->_name=@"jack";
    p1->_age=18;
    [p1 syaHi];

    Person *p2=[Person new];
    p2->_name=@"mike";
    p2->_age=22;
    [p1 syaHi];
}