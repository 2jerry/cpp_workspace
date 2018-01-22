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
		// [&](int weight) {cout << "eatLambda() :: 철수는 " <<
		//	chulsoo.count++ << "번째" << weight << "g 짜리 스테이크를 먹는다 " << endl; }(1000);
		[=](int weight) mutable {cout << "eatLambda() :: 철수는 " <<
			chulsoo.count++ << "번째" << weight << "g 짜리 스테이크를 먹는다 " << endl; }(1000);
	}
}

