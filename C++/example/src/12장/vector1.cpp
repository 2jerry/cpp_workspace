#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v; // int 원소를 가지는 v라는 벡터를 생성

	v.push_back(10);
	v.push_back(20);

	cout << "v[0] : " << v[0] << endl;
	cout << "v.at(0) : " << v.at(0) << endl;
	cout << "v[1] : " << v[1] << endl;
	cout << "v.at(1) : " << v.at(1) << endl;

	return 0;
}