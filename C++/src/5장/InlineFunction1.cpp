#include<iostream>
using namespace std;

class Chulsoo
{
public :
	void Eat(int SteakWeight);
	inline void EatInline(int SteakWeight)
	{
		cout << "EatInline() :: ö���� " << SteakWeight << "g ¥�� ������ũ�� �Դ´�" << endl;
	}
};

int main(void)
{
	Chulsoo chul;
	chul.Eat(500);
	chul.EatInline(500);

}

void Chulsoo::Eat(int SteakWeight)
{
	cout << "Eat() :: ö���� " << SteakWeight << "g ¥�� ������ũ�� �Դ´�" << endl;
}
