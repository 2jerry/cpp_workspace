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
	cout << "이름 : " << name << endl;
	cout << "성별 : " << sex << endl;
	cout << "직업 : " << job << endl;
	cout << "성격 : " << character << endl;
	cout << "나이 : " << age << endl;
	cout << "결혼여부 : " << (marriageStatus ? "YES" : "NO") << endl;
}

void Chulsoo::eat(char *food)
{
	cout << "철수는 " << food << "를 먹는다" << endl;
}

void Chulsoo::sleep()
{
	cout << "철수는 잔다." << endl;
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
	chulsoo.constructor("철수", "남성", "작가", "diligent", 32, true);

	chulsoo.drive("레스토랑");
	chulsoo.eat("스테이크");

	cout << endl;
	chulsoo.introduce();
}