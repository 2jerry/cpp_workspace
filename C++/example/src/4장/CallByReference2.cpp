#include <iostream>
using namespace std;

class Restaurant
{
public :
	int Steak;
};

class Culsoo
{
public:
	int Eat(int&);
};

int Culsoo::Eat(int& SteakNum)
{
	SteakNum = 10000;
	cout << "ö���� �Դ´�" << endl;
	return SteakNum;
}

int main()
{
	Culsoo chulsoo;
	Restaurant restaurant;

	restaurant.Steak = 20000;
	cout << "ö���� " << chulsoo.Eat(restaurant.Steak) << "��¥�� ������ũ�� �Ծ��ٰ� �������� �ߴ�." << endl;
	cout << "��������� " << restaurant.Steak << "��¥�� ������ũ�� �Ծ��ٰ� �˰��ִ�." << endl;

}