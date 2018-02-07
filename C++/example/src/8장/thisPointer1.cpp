#include <iostream>
using namespace std;

class Chulsoo
{
private:
	int age;
public:
	// this -> age는 private age, age는 인자의 age
	Chulsoo(int age)
	{
		this->age = age; 
		cout << "\nChulsoo::Chulsoo(age) 생성자 완료" << endl;
	}
	void setAge(int age)
	{
		this->age = age;
	}
	void introduce()
	{
		cout << "철수의 나이는 " << age << "세 입니다." << endl;
	}
	Chulsoo * returnThisPointer() // 클래스형 포인터
	{
		return this;
	}
	Chulsoo returnThis()
	{
		return *this; // 참조자가 아니기 때문에 *this 값이 소멸한다.
	}
	Chulsoo& returnThisRef() // 참조형인 Chulsoo& 사용하므로 소멸되지 않는다.
	{
		return *this;
	}
};

int main(void)
{
	Chulsoo chulsoo1(32);
	cout << "chulsoo1 객체 introduce" << endl;
	chulsoo1.introduce();
	chulsoo1.setAge(50);
	chulsoo1.introduce();

	Chulsoo chulsoo2(32);
	cout << "chulsooPointer introduce" << endl;
	chulsoo2.returnThisPointer()->introduce();
	chulsoo2.returnThisPointer()->setAge(50);
	chulsoo2.returnThisPointer()->introduce();

	Chulsoo chulsoo3(32);
	cout << "chulsoo introduce" << endl;
	chulsoo3.returnThis().introduce();
	chulsoo3.returnThis().setAge(50);
	chulsoo3.returnThis().introduce();

	Chulsoo chulsoo4(32);
	cout << "chulsooRef introduce" << endl;
	chulsoo4.returnThisRef().introduce();
	chulsoo4.returnThisRef().setAge(50);
	chulsoo4.returnThisRef().introduce();

	return 0;
};