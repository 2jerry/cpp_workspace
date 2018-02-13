#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v(5,1); // int 원소를 가지는 v라는 벡터를 생성

	v.push_back(10);
	v.push_back(20);

	for (auto i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
	

	return 0;
}