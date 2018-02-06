#include "Contact.h"

using namespace std;

Contact::Contact()
{
	numberOfContact = 0;
}

// ����ó ���� �Է�
void Contact::inputContact(char *name, char *phone,
	char *mail, char *address)
{
	contactInfo[numberOfContact].inputContact(name, phone, mail, address);
	numberOfContact++;
}

// ����ó ��ü ��� ��ȸ
void Contact::printContactList()
{
	char name[30];
	for (int i = 0; i < numberOfContact; i++)
	{
		contactInfo[i].getContact(name, NULL, NULL, NULL);
		cout << i << " : " << name << endl;
	}
}

// ����ó �� ��ȸ :index
void Contact::printContact(int idx)
{
	char name[20];
	char phoneNum[13];
	char mail[30];
	char address[50];

	contactInfo[idx].getContact(name, phoneNum, mail, address);
	cout << idx << "�� idx�� ���� ����ó ��ȸ" << endl;
	cout << "����ó �̸�: " << name << endl;
	cout << "����ó ��ȭ��ȣ: " << name << endl;
	cout << "����ó �̸���: " << name << endl;
	cout << "����ó �ּ�: " << name << endl;
}

// ����ó �� ��ȸ : �̸� (�Լ� �����ε�)
void Contact::printContact(char *inName)
{
	char name[20];
	char phoneNumber[13];
	char email[30];
	char address[50];

	cout << inName << "�� ���� ����ó ��ȸ" << endl;

}

void Contact::editContacByIdx(char *inName, char *inPhone,
	char *inMail, char *inAddress)
{

}

void Contact::copyContact(int idx)
{

}

void Contact::removeContactByIdx(int idx)
{

}