#include <iostream>
using namespace std;

class Chulsoo
{
private:
	int age;
public:
	Chulsoo(int age) : age(age)
	{
		cout << "Chulsoo::Chulsoo(age) 생성자" << endl;
	}
	Chulsoo()
	{
		cout << "Chulsoo::Chulsoo() 생성자" << endl;
	}
	~Chulsoo()
	{
		cout << "Chulsoo::~Chulsoo() 소멸자" << endl;
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
	cout << "나이: " << age << endl;

}