#import <Foundation/Foundation.h>
#import "Gender.h"

@interface Person:NSObject
{
    @public
    NSString *_name;
    int _age;
    Gender _gender;
    int _leftLife;
}
-(void) show;
@end