#include <iostream>
using namespace std;

class Chulsoo
{
public:
	int count;

};

int main()
{
	Chulsoo chulsoo;
	chulsoo.count = 1;
	for (int i = 0; i < 10; i++)
	{
		// [&](int weight) {cout << "eatLambda() :: ö���� " <<
		//	chulsoo.count++ << "��°" << weight << "g ¥�� ������ũ�� �Դ´� " << endl; }(1000);
		[=](int weight) mutable {cout << "eatLambda() :: ö���� " <<
			chulsoo.count++ << "��°" << weight << "g ¥�� ������ũ�� �Դ´� " << endl; }(1000);
	}
}

