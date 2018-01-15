#include <iostream>
#include <fstream>
#include <string>

#define OWNER 1
#define CONTACT 0

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


void ownerWriteFile(OwnerInfo owner1);
void contactWriteFile(ContactInfo contact);
void inputOwnerInfo();
void outputOwnerInfo();
void addContact();
void outputContactList();
void runOwnerMenu();
void runContactMenu();
void runMainMenu();
int removeContactByIndex(int index);
void editOwnerInfo();
int removeContactByIndex(int index);
void printContactInfoByIndex(int index);


void ownerWriteFile(OwnerInfo owner1)
{
	OwnerInfo con = owner1;
	
	fstream ofs("o_info.txt",ios::app);
	ofs <<"�̸� : " <<con.name << endl;
	ofs << "����ó : " <<con.phoneNumber << endl;
	ofs << "�̸��� : "<<con.email << endl;
	ofs << "�ּ� : "<<con.address << endl;
	

	ofs.close();
}
void contactWriteFile(ContactInfo contact)
{
	ContactInfo con = contact;

	fstream ofs("c_info.txt", ios::app);
	ofs << "�̸� : " << con.name << endl;
	ofs << "����ó : " << con.phoneNumber << endl;
	ofs << "�̸��� : " << con.email << endl;
	ofs << "�ּ� : " << con.address << endl;


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

	ownerWriteFile(owner);

	cout << "�Է��� �Ϸ�Ǿ����ϴ�." << endl;
}

void outputOwnerInfo()
{
	cout << "������ �̸�: " << owner.name << endl;
	cout << "������ ��ȭ��ȣ: " << owner.phoneNumber << endl;
	cout << "������ �̸���: " << owner.email << endl;
	cout << "������ �ּ�: " << owner.address << endl;
	
	/*
	fstream ifs("o_info.txt",ios::in);
	string str;
	ifs >> str ;
	cout << str << endl;
	ifs.close();
	*/
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

	contactWriteFile(contacts[contactNumber]);

	contactNumber++;
	cout << "�Է��� �Ϸ�Ǿ����ϴ�." << endl;

}

void outputContactList()
{
	/*fstream ifs("c_info.txt", ios::in);
	string str;
	ifs >> str;
	cout << str << endl;
	ifs.close();*/
	
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
		cout << "3. ������ ���� ����" << endl;
		cout << "4. ���� ȭ��" << endl;
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
			editOwnerInfo();
			break;
		case 4:
			break;
		default:
			cout << "�ٽ� �Է��ϼ���." << endl;
		}
	} while (menuNum != 4);
}

void runContactMenu()
{
	int menuNum,index,res;

	do {
		cout << "1. ����ó �߰� �Է�" << endl;
		cout << "2. ����ó ��� ��ȸ" << endl;
		cout << "3. ����ó ��� ����" << endl;
		cout << "4. ����ó �� ��ȸ" << endl;
		cout << "5. ���� ȭ��" << endl;
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
			cout << "������ ����ó : ";
			cin >> index;
			res = removeContactByIndex(index);
			if (res)
				cout << "���� ����" << endl;
			else
				cout << "������ ����" << endl;
			break;
		case 4:
			cout << "��ȸ�� ����ó : ";
			cin >> index;
			printContactInfoByIndex(index);
			
		case 5:
			cout << "����ȭ��" << endl;
			break;
		default:
			cout << "�ٽ� �Է��ϼ���." << endl;

		}
	} while (menuNum != 5);
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

void editOwnerInfo()// ������ ���� ����
{
	int inputNum;

	cout << "1. ������ �̸� ���� " << endl;
	cout << "2. ������ ��ȭ��ȣ ���� " << endl;
	cout << "3. ������ �̸��� ���� " << endl;
	cout << "4. ������ �ּ� ���� " << endl;
	cout << "5. �����޴� " << endl;

	cin >> inputNum;

	switch (inputNum)
	{
	case 1:
		cin >> owner.name;
		break;
	case 2:
		cin >> owner.phoneNumber;
		break;
	case 3:
		cin >> owner.email;
		break;
	case 4:
		cin >> owner.address;
		break;
	default:
		cout << "���� �ƹ��͵� �ȉ�" << endl;
		break;
	}
}

int removeContactByIndex(int index) //  ����ó ����
{
	if ((index >= contactNumber) || (index < 0))
		return 0;

	int i;
	for (i = index + 1; i < contactNumber; i++)
		*(contacts + i - 1) = *(contacts + i); // ���� �迭�� ��Ҹ� ���� �����,

	contactNumber--;

	return 1;
}

void printContactInfoByIndex(int index)
{
	cout << index << "�� index�� ���� ����ó ��ȸ" << endl;
	cout << "����ó �̸� : " << contacts[index].name << endl;
	cout << "����ó ��ȭ��ȣ : " << contacts[index].phoneNumber << endl;
	cout << "����ó �̸��� : " << contacts[index].email << endl;
	cout << "����ó �ּ� : " << contacts[index].address << endl;


}

int main()
{
	runMainMenu();
	return 0;
}