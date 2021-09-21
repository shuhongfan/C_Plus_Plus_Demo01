#import <Foundation/Foundation.h>

//类声明
@interface Person:NSObject
{
    NSString *_name;  //  声明成员变量
    int _age;
}

-(void) run; // 声明 无参 方法
-(void) eat:(NSString *)foodName; // 声明1个参数方法  方法名字叫 eat:
-(void) eatWith:(NSString *)foodName; // 只有一个参数 方法名叫做 eatWithXXX
-(void) eatWithFood:(NSString *)foodName; // 只有一个参数 方法名叫做 eatWithXXX

-(int) sum:(int) num1:(int) num2; // 声明2个参数方法 方法名叫做 sum : :
-(int) sumWith:(int) num1 and:(int) num2; // 方法名有多个参数 方法名With and:
-(int) sumWithNum1:(int) num1 andNum2:(int) num2; // 方法名有多个参数 方法名With参数1 and参数2:
@end

//类实现
@implementation Person

//实现类无参方法
-(void) run
{
    NSLog(@"我实现run的方法...");
}

//实现类的 1个参数方法
-(void) eat:(NSString *)foodName
{
    NSLog(@"你给我的%@真好吃",foodName);
}
-(void) eatWith:(NSString *)foodName;
{
    NSLog(@"你给我的%@真好吃",foodName);
}
-(void) eatWithFood:(NSString *)foodName;
{
    NSLog(@"你给我的%@真好吃",foodName);
}

// 实现类的2个参数方法
-(int) sum:(int) num1:(int) num2
{
    int num3=num1+num2;
    return num3;
}
-(int) sumWith:(int) num1 and:(int) num2
{
    int num3=num1+num2;
    return num3;
}
-(int) sumWithNum1:(int) num1 andNum2:(int) num2;
{
    int num3=num1+num2;
    return num3;
}
@end



int main(){
//    实例化类 生成对象
    Person *p1=[Person new];

//    调用对象的run方法
    [p1 run];

//    调用对象的eat:方法
    [p1 eat:@"红烧排骨"];
    [p1 eatWith:@"红烧排骨"];
    [p1 eatWithFood:@"红烧排骨"];

//    调用对象 sum: :
    int sum = [p1 sum:5:10];
    NSLog(@"sum=%d",sum);
    sum = [p1 sumWith:10 and:20];
    NSLog(@"sum=%d",sum);
    sum = [p1 sumWithNum1:10 andNum2:20];
    NSLog(@"sum=%d",sum);
}