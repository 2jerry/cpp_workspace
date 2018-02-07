#include <iostream>
using namespace std;

int f()
{
	return 20 + 30;
}

int main()
{
	double d = 1.123;
	decltype(f()) answer1;
	decltype(d) answer2;
	decltype((d)) answer3 = answer2;

	answer2 = 2;
	answer3 = 3.5;
	answer1 = answer2 + answer3;

	cout << answer1 <<endl;
	cout << answer2 << endl;
	cout << answer3 << endl;
}