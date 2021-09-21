#include <iostream>
using namespace std;

struct Student
{
	string name;
	int age;
	int score;
};

int main(int argc, char* argv[])
{
	struct Student s1;
	s1.name = "ÕÅÈı";
	s1.age = 18;
	s1.score = 100;
	cout << s1.name << s1.age << s1.score << endl;
	struct Student s2 = {};
	return 0;
}
