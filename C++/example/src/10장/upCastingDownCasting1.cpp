#include <iostream>
using namespace std;

#define NAME_LEN 20

class Person
{
protected:
	char name[NAME_LEN];
	int age;
public:
	Person(char *name, int age)
	{
		strcpy_s(this->name, name);
		this->age = age;
	}
	void introduce()
	{
		cout << "Person 나이 : " << age << endl;
		cout << "Person 이름 : " << name << endl;
	}
	void eat()
	{
		cout << "Person은 먹는다" << endl;
	}
	void sleep()
	{
		cout << "Person은 잔다" << endl;
	}
};

class Chulsoo :public Person
{
private:
	int numOfBooks;
public:
	Chulsoo(char *name, int age, int numOfBooks)
		:Person(name, age)
	{
		this->numOfBooks = numOfBooks;
	}
	void write()
	{
		cout << "철수는 책을 쓴다" << endl;
	}

	void introduce()
	{
		cout << "철수의 이름: " << name << endl;
		cout << "철수의 나이: " << age << endl;
		cout << "철수가 쓴 책의 수: " << numOfBooks << endl;
	}
};

int main()
{
	cout << "=========== (Chulsoo -> Person) 업캐스팅 ===========" << endl;
	Chulsoo chulsooUp = Chulsoo("철수", 32, 3);
	Person personUp = chulsooUp;
	personUp.introduce();

	/*Person personDown = Person("사람", 100);
	Chulsoo chulsooDown = personDown;
	chulsooDown.introduce();*/

	return 0;
}