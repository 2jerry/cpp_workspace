#include <iostream>
using namespace std;

class Chulsoo
{
public:
	int Eat(int SteakNum = 20000);
};

int Chulsoo::Eat(int SteackNum)
{
	cout << "철수는 " << SteackNum << "원 짜리 스테이크를 먹는다" << endl;
	return SteackNum;
}

int main()
{
	Chulsoo chulsoo;
	chulsoo.Eat();
}