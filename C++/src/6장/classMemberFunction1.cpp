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
	void introduce();
	void eat(char *food);
	void sleep(); 
	void drive(char *dest);
	void write();
	void read();
	void constructor(char *name, char *sex, char *job, char *character,
		int age, bool marriageStatus);
};

void Chulsoo::introduce()
{
	cout << "�̸� : " << name << endl;
	cout << "���� : " << sex << endl;
	cout << "���� : " << job << endl;
	cout << "���� : " << character << endl;
	cout << "���� : " << age << endl;
	cout << "��ȥ���� : " << (marriageStatus ? "YES" : "NO") << endl;
}

void Chulsoo::eat(char *food)
{
	cout << "ö���� " << food << "�� �Դ´�" << endl;
}

void Chulsoo::sleep()
{
	cout << "ö���� �ܴ�." << endl;
}

void Chulsoo::read()
{

}

void Chulsoo::constructor(char *name, char *sex, char *job, char *character,
	int age, bool marriageStatus)
{
	strcpy(this->name, name);
	strcpy(this->sex, sex);
	strcpy(this->job, job);
	strcpy(this->character, character);
	this->age;
	this->marriageStatus = marriageStatus;

}



int main()
{
	Chulsoo chulsoo;
	chulsoo.constructor("ö��", "����", "�۰�", "diligent", 32, true);

	chulsoo.drive("�������");
	chulsoo.eat("������ũ");

	cout << endl;
	chulsoo.introduce();
}