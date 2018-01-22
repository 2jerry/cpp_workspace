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
	cout << "철수는 스테이크를 먹는다" << endl;
}
void Chulsoo::Eat(int SteakNum)
{
	cout << "철수는 " <<SteakNum<<"짜리 스테이크를 먹는다" << endl;
}
void Chulsoo::Eat(double SteakWeight)
{
	cout << "철수는 "<<SteakWeight<<"kg 짜리 스테이크를 먹는다" << endl;
}
void Chulsoo::Eat(int SteakNum1, int SteakNum2)
{
	cout << "철수는 "<<SteakNum1<<"짜리 스테이크와"<<SteakNum2<<"짜리 스테이크를 먹는다" << endl;
}

