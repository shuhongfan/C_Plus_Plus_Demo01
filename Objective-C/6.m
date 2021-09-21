#import <Foundation/Foundation.h>

@interface Phone:NSObject
{
    NSString *_color;
    float _size;
    NSString *_cpu;
}
-(void) aboutPhone;
-(void) callWithNumber:(NSString *) number;
-(void) sendWithMessage:(NSString *)msg toNumber:(NSString *)number;
@end

@implementation Phone
-(void) aboutPhone
{
    NSLog(@"颜色：%@,大小:%f CPU型号：%@",_color,_size,_cpu);
}
-(void) callWithNumber:(NSString *) number
{
    NSLog(@"您正在呼叫 %d",number);
    NSLog(@"对不起，您呼叫的用户已关机.");
}
-(void) sendWithMessage:(NSString *)msg toNumber:(NSString *)number
{
    NSLog(@"正在向 %@ 发送信息：%@",number,msg);
}
@end

int main(){
//    对象的创建
    Phone *iPhone=[Phone new];
    iPhone->_color=@"玫瑰金";
    iPhone->_size=4.7f;
    iPhone->_cpu=@"A9";

    [iPhone aboutPhone];
    [iPhone callWithNumber:@"110"];
    [iPhone sendWithMessage:@"今晚老地方见" toNumber:@"110"];
}