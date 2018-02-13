#include <iostream>

using namespace std;

#define UNDERVALUEEXCEPRION -1
#define OVERVALUEEXCEPRION -2
#define NOTMULTIVALUEEXCEPRION -3

int main()
{
	int value;
	try
	{
		cout << "10과 20사이의 7의 배수를 입력하세요: ";
		cin >> value;

		if (value < 10)
			throw UNDERVALUEEXCEPRION;
		else if (value > 20)
			throw OVERVALUEEXCEPRION;
		else if (value % 7 != 0)
			throw NOTMULTIVALUEEXCEPRION;
		else
			cout << "정답!! 10과 20사이의 7의 배수는 " << value << "입닌다." << endl;

	}
	catch (int e)
	{
		if (e == UNDERVALUEEXCEPRION)
			cout << "10이상의 값을 입력하세요" << endl;
		else if (e == OVERVALUEEXCEPRION)
			cout << "20이하의 값을 입력하세요" << endl;
		else if (e == NOTMULTIVALUEEXCEPRION)
			cout << "7의 배수 값을 입력하세요" << endl;

	}
}


int example(char *data, int length) throw(int, char *);