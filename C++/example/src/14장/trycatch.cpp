#include <iostream>

using namespace std;

int main()
{
	try
	{
		throw "abc";
	}
	catch (int e)
	{
		cout << "���� �߻�. ���� �� " << e << endl;
	}
	return 0;
}