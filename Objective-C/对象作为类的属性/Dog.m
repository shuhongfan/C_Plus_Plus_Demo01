#import "Dog.h"


@implementation Dog
-(void) shout
{
    NSLog(@"汪汪汪...我叫 %@ ，我是一条 %@的狗狗，我在看家！",_name,_color);
}
@end