#include <iostream>
using namespace std;

class Chulsoo
{
public:
	int Eat(int SteakNum = 20000);
};

int Chulsoo::Eat(int SteackNum)
{
	cout << "ö���� " << SteackNum << "�� ¥�� ������ũ�� �Դ´�" << endl;
	return SteackNum;
}

int main()
{
	Chulsoo chulsoo;
	chulsoo.Eat();
}