#include <iostream>
using namespace std;

int main5(int argc, char* argv[])
{
	// 1.const修饰指针 常量指针
	//指针指向的 值 不可以改，指针的 指向 可以改
	int a = 10;
	int b = 10;
	const int* p = &a;
	//*p = 20;
	p = &b;

	//2.const修饰常量 指针常量
	// 指针的 指向 不可以改，指针指向的 值 可以改
	int* const p2 = &a;
	*p2 = 100;
	//p2 = &b;

	//3.const修饰指针和常量
	//指针的指向不可以改，指针指向的值不可以改
	const int* const p3 = &a;
	//*p3 = 100;
	//p3 = &b;
	cout << p << endl;
	return 0;
}
