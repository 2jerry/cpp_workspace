#include <iostream>
using namespace std;
class Chulsoo
{
private:
	int age;
public:
	Chulsoo(const Chulsoo& source) : age(source.age)  // 깊은 복사
	{
		cout << "Chulsoo::Chulsoo(const Chulsoo &) 복사 생성자 완료" << endl;
	}

	Chulsoo(int age) : age(age)
	{
		cout << "Chulsoo::Chulsoo(age) 생성자 완료" << endl;
	}

	Chulsoo()
	{
		cout << "Chulsoo::Chulsoo() 생성자 완료" << endl;
	}

	void introduce();

	void copyConstructodCall1(Chulsoo chulsoo1)
	{

	}

	~Chulsoo() // 소멸자
	{
		cout << "Chulsoo::~Chulsoo() 소멸자 완료" << endl;
	}
};

int main()
{
	Chulsoo chulsoo(32);
	chulsoo.copyConstructodCall1(chulsoo);
}

void Chulsoo::introduce()
{
	//cout << "이름 : " << name << endl;
}