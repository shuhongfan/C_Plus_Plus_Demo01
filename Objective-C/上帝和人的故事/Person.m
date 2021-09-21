#import "Person.h"

@implementation Person
-(void) show{
    NSLog(@"我是 %@,我今年 %d岁,我的性别是 %@,我的声明还有 %d",
          _name,_age,_gender,_leftLife);
}
@end
