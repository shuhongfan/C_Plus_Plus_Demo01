#import <Foundation/Foundation.h>
#import "Dog.h"

@interface Dog:NSObject
{
    @public
    NSString *_name;
    int _age;
    Dog *_dog;
};
@end