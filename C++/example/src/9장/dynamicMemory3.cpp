#include <iostream>
using namespace std;

class Chulsoo
{
private:
	int age;

public:
	Chulsoo(int age) : age(age)
	{
		cout << "Chulsoo::Chulsoo(age) ������" << endl;
	}
	Chulsoo()
	{
		cout << "Chulsoo::Chulsoo() ������" << endl;
	}

	~Chulsoo()
	{
		cout << "Chulsoo::~Chulsoo() �Ҹ���" << endl;
	}
	void setAge(int age)
	{
		this->age = age;
	}
	void introduce();
};

int main()
{
	Chulsoo *chulPtr1 = new Chulsoo(32);
	chulPtr1->introduce();

	delete chulPtr1;
	return 0;
}

void Chulsoo::introduce()
{
	cout << "����: " << age << endl;
}