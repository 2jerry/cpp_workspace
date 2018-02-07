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
	Chulsoo *chulPtr1 = (Chulsoo *)malloc(sizeof(Chulsoo));
	chulPtr1->setAge(32);
	chulPtr1->introduce();

	free(chulPtr1);
	return 0;
}

void Chulsoo::introduce()
{
	cout << "����: " << age << endl;

}