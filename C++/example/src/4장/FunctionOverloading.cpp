#include <iostream>
using namespace std;

class Chulsoo
{
public:
	void Eat(void);
	void Eat(int SteakNum);
	void Eat(double SteakWeight);
	void Eat(int SteakNum1,int SteakNum2);
};

int main()
{
	Chulsoo chulsoo;
	chulsoo.Eat();
	chulsoo.Eat(20000);
	chulsoo.Eat(0.05);
	chulsoo.Eat(10000, 30000);

}

void Chulsoo::Eat(void)
{
	cout << "ö���� ������ũ�� �Դ´�" << endl;
}
void Chulsoo::Eat(int SteakNum)
{
	cout << "ö���� " <<SteakNum<<"¥�� ������ũ�� �Դ´�" << endl;
}
void Chulsoo::Eat(double SteakWeight)
{
	cout << "ö���� "<<SteakWeight<<"kg ¥�� ������ũ�� �Դ´�" << endl;
}
void Chulsoo::Eat(int SteakNum1, int SteakNum2)
{
	cout << "ö���� "<<SteakNum1<<"¥�� ������ũ��"<<SteakNum2<<"¥�� ������ũ�� �Դ´�" << endl;
}

