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
	
	// ��ȯ�� char
	cout << [=](int weight)mutable ->char {
		cout << "eatLambda() :: ö���� " << chulsoo.count++ <<
			"��°" << weight << "g ¥�� ������ũ�� �Դ´�." << endl;
		return weight;	}(67) << endl;
	// ��ȯ�� int
	cout << [=](int weight)mutable ->int {
		cout << "eatLambda() :: ö���� " << chulsoo.count <<
			"��°" << weight << "g ¥�� ������ũ�� �Դ´�." << endl;
		return weight;	}(67) << endl;
	// ��ȯ�� char
	cout << [=](int weight)mutable{
		cout << "eatLambda() :: ö���� " << chulsoo.count++ <<
			"��°" << weight << "g ¥�� ������ũ�� �Դ´�." << endl;
		return weight;	}(67) << endl;


}

