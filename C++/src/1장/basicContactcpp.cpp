#include <iostream>
#include <fstream>

using namespace std;

struct OwnerInfo {
	char name[10];
	char phoneNumber[13];
	char email[30];
	char address[50];
} owner;
struct ContactInfo {
	char name[10];
	char phoneNumber[13];
	char email[30];
	char address[50];
} contacts[100];
int contactNumber = 0;

void writeFile(ContactInfo contact)
{
	ContactInfo con = contact;
	ofstream ofs("info.txt",ios::app);
	ofs <<"�̸� : " <<con.name << endl;
	ofs << "����ó : " <<con.phoneNumber << endl;
	ofs << "�̸��� : "<<con.email << endl;
	ofs << "�ּ� : "<<con.address << endl;
	

	ofs.close();
	}

void inputOwnerInfo()
{
	cout << "������ �̸� : ";
	cin >> owner.name;
	
	cout << "������ ��ȭ��ȣ : ";
	cin >> owner.phoneNumber;

	cout << "������ �̸��� : ";
	cin >> owner.email;

	cout << "������ �ּ� : ";
	cin >> owner.address;

	cout << "�Է��� �Ϸ�Ǿ����ϴ�." << endl;
}

void outputOwnerInfo()
{
	cout << "������ �̸�: " << owner.name << endl;
	cout << "������ ��ȭ��ȣ: " << owner.phoneNumber << endl;
	cout << "������ �̸���: " << owner.email << endl;
	cout << "������ �ּ�: " << owner.address << endl;
}

void addContact()
{
	cout << "����ó �̸� : ";
	cin >> contacts[contactNumber].name;

	cout << "����ó ��ȭ��ȣ: ";
	cin >> contacts[contactNumber].phoneNumber;

	cout << "����ó �̸��� : ";
	cin >> contacts[contactNumber].email;

	cout << "����ó �ּ� : ";
	cin >> contacts[contactNumber].address;

	writeFile(contacts[contactNumber]);

	contactNumber++;
	cout << "�Է��� �Ϸ�Ǿ����ϴ�." << endl;

	
}

void outputContactList()
{
	int i;
	for (i = 0; i < contactNumber; i++)
		cout << i << " : " << contacts[i].name << endl;

}

void runOwnerMenu()
{
	int menuNum;

	do {
		cout << "1. ������ ���� �Է�" << endl;
		cout << "2. ������ ���� ��ȸ" << endl;
		cout << "3. ���� ȭ��" << endl;
		cin >> menuNum;

		switch (menuNum)
		{
		case 1:
			inputOwnerInfo();
			break;
		case 2:
			outputOwnerInfo();
			break;
		case 3:
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		default:
			cout << "�ٽ� �Է��ϼ���." << endl;
		}
	} while (menuNum != 3);
}

void runContactMenu()
{
	int menuNum;

	do {
		cout << "1. ����ó �߰� �Է�" << endl;
		cout << "2. ����ó ��� ��ȸ" << endl;
		cout << "3. ���� ȭ��" << endl;
		cin >> menuNum;

		switch (menuNum)
		{
		case 1:
			addContact();
			break;
		case 2:
			outputContactList();
			break;
		case 3:
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		default:
			cout << "�ٽ� �Է��ϼ���." << endl;

		}
	} while (menuNum != 3);
}
void runMainMenu()
{
	int menuNum;

	do {
		cout << "1. ������ ���� ���" << endl;
		cout << "2. ����ó ���� ���" << endl;
		cout << "3. ���α׷� ����" << endl;
		cin >> menuNum;

		switch (menuNum)
		{
		case 1:
			runOwnerMenu();
			break;
		case 2:
			runContactMenu();
			break;
		case 3:
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		default:
			cout << "�ٽ� �Է��ϼ���." << endl;

		}
	} while (menuNum != 3);
}

int main()
{
	runMainMenu();
	return 0;
}