#include <iostream>
#include <array>

using namespace std;
int main()
{
	array<int, 10> ar; // int형 크기10인 array 객체 생성
	ar = { 1,2,3 };

	for (auto i = 0; i < ar.size(); i++)
		cout << ar.at(i) << " ";
	cout << endl;

	ar.fill(5);

	for (auto i = 0; i < ar.size(); i++)
		cout << ar.at(i) << " ";

	return 0;
}
