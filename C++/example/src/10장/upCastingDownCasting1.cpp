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
		cout << "Person ���� : " << age << endl;
		cout << "Person �̸� : " << name << endl;
	}
	void eat()
	{
		cout << "Person�� �Դ´�" << endl;
	}
	void sleep()
	{
		cout << "Person�� �ܴ�" << endl;
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
		cout << "ö���� å�� ����" << endl;
	}

	void introduce()
	{
		cout << "ö���� �̸�: " << name << endl;
		cout << "ö���� ����: " << age << endl;
		cout << "ö���� �� å�� ��: " << numOfBooks << endl;
	}
};

int main()
{
	cout << "=========== (Chulsoo -> Person) ��ĳ���� ===========" << endl;
	Chulsoo chulsooUp = Chulsoo("ö��", 32, 3);
	Person personUp = chulsooUp;
	personUp.introduce();

	/*Person personDown = Person("���", 100);
	Chulsoo chulsooDown = personDown;
	chulsooDown.introduce();*/

	return 0;
}