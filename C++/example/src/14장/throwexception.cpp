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
		cout << "10�� 20������ 7�� ����� �Է��ϼ���: ";
		cin >> value;

		if (value < 10)
			throw UNDERVALUEEXCEPRION;
		else if (value > 20)
			throw OVERVALUEEXCEPRION;
		else if (value % 7 != 0)
			throw NOTMULTIVALUEEXCEPRION;
		else
			cout << "����!! 10�� 20������ 7�� ����� " << value << "�ԴѴ�." << endl;

	}
	catch (int e)
	{
		if (e == UNDERVALUEEXCEPRION)
			cout << "10�̻��� ���� �Է��ϼ���" << endl;
		else if (e == OVERVALUEEXCEPRION)
			cout << "20������ ���� �Է��ϼ���" << endl;
		else if (e == NOTMULTIVALUEEXCEPRION)
			cout << "7�� ��� ���� �Է��ϼ���" << endl;

	}
}


int example(char *data, int length) throw(int, char *);