#include <iostream>
using namespace std;

class Chulsoo
{
private:
	int age;
public:
	Chulsoo(int age) : age(age)
	{
		cout << "Chulsoo::Chulsoo(age) 생성자 완료" << endl;
	}
	Chulsoo()
	{
		cout << "Chulsoo::Chulsoo() 생성자 완료" << endl;
	}
	void introduce();
	~Chulsoo()
	{
		cout << "Chulsoo::~Chulsoo() 소멸자 완료" << endl;
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
	cout << "나이 : " << age << endl;
}