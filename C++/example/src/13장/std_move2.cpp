#include <iostream>
#include <vector>

using namespace std;

class MyContainer
{
private:
	vector<int> *bucket;
	vector<int> v;
	int count;
	int value;

public:
	MyContainer(int cnt, int val) // ������
	{
		cout << "������ ȣ��" << endl;
		for (auto i = 0; i < cnt; i++)
			v.push_back(val);
		bucket = &v;
		count = cnt;
		value = val;
		cout << "bucket: " << bucket << endl;
	}
	MyContainer(const MyContainer& copy) // ���� ������
	{
		cout << "���� ������ ȣ��" << endl;
		auto val = copy.v.begin();
		for (auto i = 0; i < copy.count; ++i)
			v.push_back(*(val + i));
		bucket = &v;
		count = copy.count;
		cout << "bucket: " << bucket << endl;
	}

	MyContainer(MyContainer&& move) // �̵� ������
	{
		cout << "�̵� ������ ȣ��" << endl;
		bucket=&(move.v);
		count = move.count;
		move.count = 0;
		cout << "bucket: " << bucket << endl;
	}
	MyContainer operator = (MyContainer&& move)  // �̵� ���� ������
	{
		cout << "�̵� ���� ������ ȣ��" << endl;
		//swap(count,move.count);
		v.clear();
		for (auto i = move.v.begin(); i != (*bucket).end(); ++i)
			v.push_back(move.value);
		bucket = &v;
		cout << "bucket: " << bucket << endl;
		return *this;
	}
	void showContaniner()
	{
		cout << "[showContainer]" << endl;
		for (auto i = (*bucket).begin(); i != (*bucket).end(); ++i)
			cout << *i << " ";
		cout << endl;
		auto i = (*bucket).begin();
		cout << &(*i) << endl;
	}

};

MyContainer CreateMyContaincer(int m, int n)
{
	return MyContainer(m, n);
}

int main()
{
	MyContainer myCon1(20, 1);
	myCon1.showContaniner();
	MyContainer myCon2 = myCon1;
	myCon2.showContaniner();
	MyContainer myCon3(20, 3);
	myCon3.showContaniner();
	MyContainer myCon4(std::move(myCon3));
	myCon4.showContaniner();
	MyContainer myCon5(20, 5);
	myCon5.showContaniner();
	myCon5 = CreateMyContaincer(20, 7);
	myCon5.showContaniner();
}