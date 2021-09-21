#import "Gold.h"

@implementation God
-(void) killWithPerson:(Person *)person{
    NSLog(@"喝下这杯毒药，凡人....");
    person->_leftLife = 0;
    NSLog(@"名字叫做 %@ 的人，已经死了",person->_name);
}

-(Person *) makePerson
{
    Person *p1=[Person new];
    p1->_name=@"晓东";
    p1->_age=21;
    p1->_leftLife=10;
    p1->_gender=GenderMale;
    return p1;
}

-(Person *) makePersonWithName:(NSString *)name andAge:(int)age andGender:(Gender)gender andLeftLife:(int)leftLife
{
    Person *p1 = [Person new];
    p1->_name=name;
    p1->_age=age;
    p1->_gender=gender;
    p1->_leftLift=leftLife;
    return p1;
}
@end