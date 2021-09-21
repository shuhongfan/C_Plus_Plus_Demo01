#include <iostream>
using namespace std;

int main7(int argc, char* argv[])
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//for (int i : arr) cout << i << endl;

	int* p = arr;
	for (int i = 0; i < 10; i++) {
		//cout << arr[i] << endl;
		cout << *p << endl;
		p++;
	}
	return 0;
}
