#include <iostream>
using namespace std;
class Chulsoo
{
private:
	char * name;
public:
	Chulsoo(char *name) // ������
	{
		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);
		cout << "Chulsoo::Chulsoo(name) ������ �Ϸ�" << endl;
	}

	Chulsoo()
	{
		cout << "Chulsoo::Chulsoo() ������ �Ϸ�" << endl;
	}
	
	Chulsoo(const Chulsoo& source) // ���� ����
	{
		this->name = new char[strlen(source.name)+1];
		strcpy_s(this->name,strlen(source.name)+1,source.name);
	}
	
	void introduce();
	~Chulsoo() // �Ҹ���
	{
		delete[] name;
		cout << "Chulsoo::~Chulsoo() �Ҹ��� �Ϸ�" << endl;
	}
};

int main()
{
	Chulsoo chulsoo("ö��");
	Chulsoo chulsoo2(chulsoo);

	chulsoo.introduce();
	chulsoo2.introduce();

}

void Chulsoo::introduce()
{
	cout << "�̸� : " << name << endl;
}