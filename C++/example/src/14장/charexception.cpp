#include <iostream>
using namespace std;

int main()
{
	char name[512];
	try
	{
		cout << "�̸� �Է�" << endl;
		cin >> name;

		if (strlen(name) <= 2)
			throw name;

		cout << "���� �̸���" << name << "�Դϴ�." << endl;
	}
	catch (char *e)
	{
		cout << "���� �߻�. �߸��� �Է� ��: " << e << endl;
	}
	return 0;
}