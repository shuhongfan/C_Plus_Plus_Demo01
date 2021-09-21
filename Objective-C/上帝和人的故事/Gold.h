#import <Foundation/Foundation.h>
#import "Gender.h"
#import "Person.h"

@interface God:NSObject
{
@public
    NSString *_name;
    int _age;
    Gender _gender;
}
-(void) killWithPerson:(Person *)person;
-(Person *) makePerson;
-(Person *) makePersonWithName:(NSString *)name andAge:(int)age andGender:(Gender)gender andLeftLife:(int)leftLife;
@end