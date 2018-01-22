#include <iostream>
using namespace std;

class Restaurant
{
public :
	int Steak;
};

class Chulsoo
{
public:
	int Eat(int);
};

int Chulsoo::Eat(int num)
{
	num = 10000;
	cout << "ธิดยดู" << endl;
	return num;
}

int main(void)
{
	Chulsoo chulsoo;
	Restaurant restaurant;

	restaurant.Steak = 20000;


	return 0;
}