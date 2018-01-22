#include <iostream>
using namespace std;

class Chulsoo
{
public:
	int count;

};

int main()
{
	Chulsoo chulsoo;
	chulsoo.count = 1;
	
	// 반환형 char
	cout << [=](int weight)mutable ->char {
		cout << "eatLambda() :: 철수는 " << chulsoo.count++ <<
			"번째" << weight << "g 짜리 스테이크를 먹는다." << endl;
		return weight;	}(67) << endl;
	// 반환형 int
	cout << [=](int weight)mutable ->int {
		cout << "eatLambda() :: 철수는 " << chulsoo.count <<
			"번째" << weight << "g 짜리 스테이크를 먹는다." << endl;
		return weight;	}(67) << endl;
	// 반환형 char
	cout << [=](int weight)mutable{
		cout << "eatLambda() :: 철수는 " << chulsoo.count++ <<
			"번째" << weight << "g 짜리 스테이크를 먹는다." << endl;
		return weight;	}(67) << endl;


}

