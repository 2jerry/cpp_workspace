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
	cout << "철수가 먹는다" << endl;
	return SteakNum;
}

int main()
{
	Culsoo chulsoo;
	Restaurant restaurant;

	restaurant.Steak = 20000;
	cout << "철수는 " << chulsoo.Eat(restaurant.Steak) << "원짜리 스테이크를 먹었다고 거짓말을 했다." << endl;
	cout << "레스토랑은 " << restaurant.Steak << "원짜리 스테이크를 먹었다고 알고있다." << endl;

}