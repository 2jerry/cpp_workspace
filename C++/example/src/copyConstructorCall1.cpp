#include <iostream>
using namespace std;
class Chulsoo
{
private:
	int age;
public:
	Chulsoo(const Chulsoo& source) : age(source.age)  // ���� ����
	{
		cout << "Chulsoo::Chulsoo(const Chulsoo &) ���� ������ �Ϸ�" << endl;
	}

	Chulsoo(int age) : age(age)
	{
		cout << "Chulsoo::Chulsoo(age) ������ �Ϸ�" << endl;
	}

	Chulsoo()
	{
		cout << "Chulsoo::Chulsoo() ������ �Ϸ�" << endl;
	}

	void introduce();

	void copyConstructodCall1(Chulsoo chulsoo1)
	{

	}

	~Chulsoo() // �Ҹ���
	{
		cout << "Chulsoo::~Chulsoo() �Ҹ��� �Ϸ�" << endl;
	}
};

int main()
{
	Chulsoo chulsoo(32);
	chulsoo.copyConstructodCall1(chulsoo);
}

void Chulsoo::introduce()
{
	//cout << "�̸� : " << name << endl;
}