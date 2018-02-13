#include <iostream>
using namespace std;

#define NAME_LEN 20

class Person
{
private:
	char name[NAME_LEN];
	int age;
public:
	Person(char *name, int age)
	{
		strcpy_s(this->name, name);
		this->age = age;
		cout << "Person::Person(name,age) ������ �Ϸ�" << endl;
	}
	~Person()
	{
		cout << "Person::~Person() �Ҹ��� �Ϸ�" << endl;
	}

	void introduce()
	{
		cout << "Person �̸�: " << name << endl;
		cout << "Person ����: " << age << endl;
	}
	void eat()
	{
		cout << "Person �Դ´�" << endl;
	}
	void sleep()
	{
		cout << "Person �ܴ�" << endl;
	}
};

class Chulsoo :public Person
{
private:
	int numOfBooks;
public:
	Chulsoo(char *name, int age, int numOfBooks)
		: Person(name, age)
	{
		this->numOfBooks = numOfBooks;
		cout << "Chulsoo::Chulsoo(name, age, numOfBooks) ������ �Ϸ�" << endl;
	}
	~Chulsoo()
	{
		cout << "Chulsoo::~Chulsoo() �Ҹ��� �Ϸ�" << endl;
	}
	void write()
	{
		cout << "�޼��� å�� ����" << endl;
	}
};

class Younghee : public Person
{
private:
	int numOfFlowers;
public:
	Younghee(char *name, int age, int numofFlowers)
		: Person(name, age)
	{
		this->numOfFlowers = numofFlowers;
		cout << "Younghee::Younghee(name,age,numOfFlowers) ������ �Ϸ� \
			������ �Ϸ�" << endl;
	}
	~Younghee()
	{
		cout << "Younghee::~Younghee() �Ҹ��� �Ϸ�" << endl;
	}
	void shopping()
	{
		cout << "����� ������ �Ѵ�" << endl;
	}
};

int main()
{
	cout << "======= Person ��ü ���� �� =======" << endl;
	Person person("���", 100);
	person.introduce();
	person.eat();
	person.sleep();
	cout << "======= Person ��ü ���� �� =======" << endl;

	cout << "\n======= Chulsoo ��ü ���� �� =======" << endl;
	Chulsoo chulsoo("ö��", 32, 3);
	chulsoo.introduce();
	chulsoo.eat();
	chulsoo.sleep();
	chulsoo.write();
	cout << "======= Chulsoo ��ü ���� �� =======" << endl;

	cout << "======= \nYounghee ��ü ���� �� =======" << endl;
	Younghee younghee("����", 30, 10);
	younghee.introduce();
	younghee.eat();
	younghee.sleep();
	younghee.shopping();
	cout << "======= Younghee ��ü ���� �� =======" << endl;
}