#include <iostream>
using namespace std;

class Chulsoo
{
public:
	void eat(int weight);
	inline void eatInline(int weight)
	{
		cout << "eatInline :: 철수는 " << weight << "g 짜리 스테이크를 먹는다." << endl;
	}

};

int main()
{
	Chulsoo chulsoo;
	chulsoo.eat(100);
	chulsoo.eatInline(100);
	[](int weight) {cout << "eatLambda() :: 철수는 "
		<< weight << "g 짜리 스테이크를 먹는다." << endl; }(1000);
}

void Chulsoo::eat(int weight)
{
	cout << "eat() :: 철수는 " << weight << "g 짜리 스테이크를 먹는다." << endl;
}