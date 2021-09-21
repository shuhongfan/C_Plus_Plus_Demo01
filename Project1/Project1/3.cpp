#include <iostream>
using namespace std;

int main3(int argc, char* argv[])
{
	int a = 10;
	int* p;
	p = &a;
	std::cout << "a的地址为：" << &a << std::endl;
	std::cout << "p的地址为：" << p << std::endl;

	return 0;
}
