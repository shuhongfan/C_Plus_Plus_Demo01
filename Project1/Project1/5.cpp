#include <iostream>
using namespace std;

int main5(int argc, char* argv[])
{
	// 1.const����ָ�� ����ָ��
	//ָ��ָ��� ֵ �����Ըģ�ָ��� ָ�� ���Ը�
	int a = 10;
	int b = 10;
	const int* p = &a;
	//*p = 20;
	p = &b;

	//2.const���γ��� ָ�볣��
	// ָ��� ָ�� �����Ըģ�ָ��ָ��� ֵ ���Ը�
	int* const p2 = &a;
	*p2 = 100;
	//p2 = &b;

	//3.const����ָ��ͳ���
	//ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵ�����Ը�
	const int* const p3 = &a;
	//*p3 = 100;
	//p3 = &b;
	cout << p << endl;
	return 0;
}
