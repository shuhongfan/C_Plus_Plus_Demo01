#import <Foundation/Foundation.h> // 无论import多少次，最终只会包含1此，不会出现重复包含的情况

@interface Student:NSObject
{
    @public
    NSString *_name;
    float _weight;
}
-(void) run;
-(void) eat;
@end

@implementation Student
-(void)run
{
    NSLog(@"running....");
    _weight -= 0.5;
    NSLog(@"跑完了,我的体重是： %.2f",_weight);
}
-(void) eat{
    NSLog(@"eating....");
    _weight += 0.7;
    NSLog(@"吃完了，我的体重是：%.2f",_weight);
}
@end


int main(){
    Student *s1=[Student new];
    s1->_name=@"jack";
    s1->_weight=90.4f;
    [s1 run];
    [s1 run];
    [s1 eat];
    [s1 eat];
    [s1 run];
}