#import "Gold.h"

int main(){
    God *g1 = [God new];
    g1->_name=@"耶稣";
    g1->_age=9999;
    g1->_gender=GenderMale;


    Person *p1=[Person new];
    p1->_name=@"晓东";
    p1->_age=21;
    p1->_leftLife=10;
    p1->_gender=GenderMale;

    [g1 killWithPerson:p1];

    NSLog(@"p1->_leftLife = %d",_leftLife);

    Person *p2 = [g1 makePerson];
    [p2 show];

    Person *p3=[g1 makePersonWithName:@"小儿" andAge:0 andGender:GenderFeMale andLeftLife:100];
    [p3 show];
}

