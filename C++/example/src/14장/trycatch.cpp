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
		cout << "예외 발생. 예외 값 " << e << endl;
	}
	return 0;
}