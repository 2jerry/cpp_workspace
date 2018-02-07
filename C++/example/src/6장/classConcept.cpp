#include <iostream>
using namespace std;

#define NAME_LEN 20
#define SEX_LEN 10
#define JOB_LEN 20
#define CHAR_LEN 20

class Chulsoo
{
private:
	char name[NAME_LEN];
	char sex[SEX_LEN];
	char job[JOB_LEN];
	char character[CHAR_LEN];
	int age;
	bool marriageStatus;

public:
	void introduce()
	{
		cout << "�̸� : " << name << endl;
		cout << "���� : " << sex << endl;
		cout << "���� : " << job << endl;
		cout << "���� : " << character << endl;
		cout << "���� : " << age << endl;
		cout << "��ȥ���� : " << (marriageStatus ? "YES" : "NO") << endl;
	}

	void eat(char *food)
	{
		cout << "ö���� " << food << "�� �Դ´�" << endl;
	}

	void sleep()
	{
		cout << "ö���� �ܴ�." << endl;
	}

	void drive(char *dest)
	{
		cout << "ö���� " << dest << "���� �����Ѵ�." << endl;
	}

	void write()
	{
		cout << "ö���� å�� ����." << endl;
	}

	void read()
	{
		cout << "ö���� å�� �д´�." << endl;
	}
	void constructor(char *name, char *sex, char *job, char *character,
		int age, bool marriageStatus)
	{
		strcpy_s(this->name, name);
		strcpy_s(this->sex, sex);
		strcpy_s(this->job, job);
		strcpy_s(this->character, character);
		this->age = age;
		this->marriageStatus = marriageStatus;
	};


	
};

int main()
{
	Chulsoo chulsoo;
	chulsoo.constructor( "ö��","����","�۰�","diligent",32,true );

	chulsoo.drive("�������");
	chulsoo.eat("������ũ");

	cout << endl;
	chulsoo.introduce();
}