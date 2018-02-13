#include <iostream>
using namespace std;
class Chulsoo
{
private:
	char * name;
public:
	Chulsoo(char *name) // 생성자
	{
		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);
		cout << "Chulsoo::Chulsoo(name) 생성자 완료" << endl;
	}

	Chulsoo()
	{
		cout << "Chulsoo::Chulsoo() 생성자 완료" << endl;
	}
	
	Chulsoo(const Chulsoo& source) // 깊은 복사
	{
		this->name = new char[strlen(source.name)+1];
		strcpy_s(this->name,strlen(source.name)+1,source.name);
	}
	
	void introduce();
	~Chulsoo() // 소멸자
	{
		delete[] name;
		cout << "Chulsoo::~Chulsoo() 소멸자 완료" << endl;
	}
};

int main()
{
	Chulsoo chulsoo("철수");
	Chulsoo chulsoo2(chulsoo);

	chulsoo.introduce();
	chulsoo2.introduce();

}

void Chulsoo::introduce()
{
	cout << "이름 : " << name << endl;
}