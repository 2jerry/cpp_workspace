#include <iostream>
using namespace std;

class Chulsoo
{
private:
	int age;
public:
	Chulsoo(int age) : age(age)
	{
		cout << "Chulsoo::Chulsoo(age) ������ �Ϸ�" << endl;
	}
	Chulsoo()
	{
		cout << "Chulsoo::Chulsoo() ������ �Ϸ�" << endl;
	}
	void introduce();
	~Chulsoo()
	{
		cout << "Chulsoo::~Chulsoo() �Ҹ��� �Ϸ�" << endl;
	}
};
int main()
{
	Chulsoo chul1(32);
	Chulsoo chul2(35);
	chul1.introduce();
	chul2.introduce();
	return 0;
}

void Chulsoo::introduce()
{
	cout << "���� : " << age << endl;
}