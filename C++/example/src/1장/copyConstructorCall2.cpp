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

	Chulsoo copyConstructodCall2()
	{
		Chulsoo chulsooObj2(100); // �ι�° ������ ȣ��
		return chulsooObj2; // ���� ������ ȣ��
	}

	~Chulsoo() // �Ҹ���
	{
		cout << "Chulsoo::~Chulsoo() �Ҹ��� �Ϸ�" << endl;
	}
};

int main()
{
	Chulsoo chulsoo(32); // ù��° ������ ȣ��
	chulsoo.copyConstructodCall2();
}

void Chulsoo::introduce()
{
	//cout << "�̸� : " << name << endl;
}