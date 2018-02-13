#include <iostream>
#pragma warning(default:4716)
using namespace std;

class MyArray
{
private:
	int num;

public:
	MyArray(int n) // ������
	{
		cout << "������ ȣ��" << endl;
		num = n;
	}
	MyArray(const MyArray& copy) // ���� ������
	{
		cout << "���� ������ ȣ��" << endl;
		num = copy.num;
	}
	MyArray(MyArray&& move) // �̵� ������
	{
		cout << "�̵� ������ ȣ��" << endl;
		num = move.num;
		move.num = 0;
	}
	MyArray operator = (MyArray&& move)  // �̵� ���� ������
	{
		cout << "�̵� ���� ������ ȣ��" << endl;
		swap(num, move.num);
	}
	int getNum()
	{
		return num;
	}
};

MyArray CreateMyArray()
{
	return MyArray(100);
}

int main()
{
	MyArray ar1(10);
	MyArray ar2(ar1);
	cout << "ar1.getNum: " << ar1.getNum() << endl;
	cout << "ar2.getNum: " << ar2.getNum() << endl;
	ar2 = CreateMyArray();
	cout << "ar1.getNum: " << ar1.getNum() << endl;
	cout << "ar2.getNum: " << ar2.getNum() << endl;
	MyArray ar3(std::move(ar1));
	cout << "ar1.getNum: " << ar1.getNum() << endl;
	cout << "ar3.getNum: " << ar3.getNum() << endl;

	return 0;
}