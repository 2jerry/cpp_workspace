#include <iostream>
#include <array>

using namespace std;
int main()
{
	array<int, 10> ar; // int屈 农扁10牢 array 按眉 积己
	ar = { 1,2,3 };

	for (auto i = 0; i < ar.size(); i++)
		cout << ar.at(i) << " ";
	cout << endl;

	ar.fill(5);

	for (auto i = 0; i < ar.size(); i++)
		cout << ar.at(i) << " ";

	return 0;
}
