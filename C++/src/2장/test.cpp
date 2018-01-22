#include <iostream>
using namespace std;

int main()
{
	int value = 100;
	int *p_value = &value;

	cout << value << endl;
	cout << &value << endl;
	cout << &p_value << endl;
	cout << *p_value << endl;
	cout << &p_value << endl;
	int **pp_value = &p_value;
}