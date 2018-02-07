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
		cout << "이름 : " << name << endl;
		cout << "성별 : " << sex << endl;
		cout << "직업 : " << job << endl;
		cout << "성격 : " << character << endl;
		cout << "나이 : " << age << endl;
		cout << "결혼여부 : " << (marriageStatus ? "YES" : "NO") << endl;
	}

	void eat(char *food)
	{
		cout << "철수는 " << food << "를 먹는다" << endl;
	}

	void sleep()
	{
		cout << "철수는 잔다." << endl;
	}

	void drive(char *dest)
	{
		cout << "철수는 " << dest << "으로 운전한다." << endl;
	}

	void write()
	{
		cout << "철수는 책을 쓴다." << endl;
	}

	void read()
	{
		cout << "철수는 책을 읽는다." << endl;
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
	chulsoo.constructor( "철수","남성","작가","diligent",32,true );

	chulsoo.drive("레스토랑");
	chulsoo.eat("스테이크");

	cout << endl;
	chulsoo.introduce();
}