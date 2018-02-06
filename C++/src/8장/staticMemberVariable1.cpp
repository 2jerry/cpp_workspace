#include <iostream>
using namespace std;

// protected 클래스 내부에서만 접근가능하고, 상속시 그 클래스도 사용가능
class Chulsoo
{
private:
	int age;
	static int chulsooPrivateCounter;
protected:
	static int chulsooProtectedCounter;
public:
	static int chulsooPublicCounter;

	// 생성자
	Chulsoo(int age) : age(age) 
	{
		chulsooPrivateCounter++;
		chulsooProtectedCounter++;
		chulsooPublicCounter++;
		cout << "Chulsoo::Chulsoo(age) 생성자로 만들어지는 " <<
			chulsooPrivateCounter << "(private) 번째 객체 생성 완료" << endl;
		cout << "Chulsoo::Chulsoo(age) 생성자로 만들어지는 " <<
			chulsooProtectedCounter << "(protected) 번째 객체 생성 완료" << endl;
		cout << "Chulsoo::Chulsoo(age) 생성자로 만들어지는 " <<
			chulsooPublicCounter << "(public) 번째 객체 생성 완료" << endl;
	}
};

int Chulsoo::chulsooPrivateCounter = 0;
int Chulsoo::chulsooProtectedCounter = 0;
int Chulsoo::chulsooPublicCounter = 0;

class Younghee
{
private:
	int age;
public :
	Younghee(int age) : age(age)
	{
		//Chulsoo::chulsooPrivateCounter++;
		//Chulsoo::chulsooProtectedCounter++;
		Chulsoo::chulsooPublicCounter++;
		cout << "Younghee::Younghee(age) 생성자로 만들어지는" <<
			Chulsoo::chulsooPublicCounter << "번째 객체 생성완료" << endl;
	}
};

int main()
{
	Chulsoo chulsoo1(32);
	Chulsoo chulsoo2(32);

	Younghee younghee1(32);
	Younghee younghee2(32);
	return 0;
}