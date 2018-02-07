#include <iostream>
using namespace std;

class Chulsoo
{
public:
	void eat(int weight);
	inline void eatInline(int weight)
	{
		cout << "eatInline :: ö���� " << weight << "g ¥�� ������ũ�� �Դ´�." << endl;
	}

};

int main()
{
	Chulsoo chulsoo;
	chulsoo.eat(100);
	chulsoo.eatInline(100);
	[](int weight) {cout << "eatLambda() :: ö���� "
		<< weight << "g ¥�� ������ũ�� �Դ´�." << endl; }(1000);
}

void Chulsoo::eat(int weight)
{
	cout << "eat() :: ö���� " << weight << "g ¥�� ������ũ�� �Դ´�." << endl;
}