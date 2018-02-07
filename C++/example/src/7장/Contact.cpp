#include "Contact.h"
#include "freelecTwitcurl.h"
#include "Owner.h"

using namespace std;

// ������
Contact::Contact()
{
	contactInfo = new PersonalContact[100];
	numberOfContact = 0;
}

// �Ҹ��� �޸�����
Contact::~Contact()
{
	delete[] contactInfo;
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

	for (int i = 0; i < numberOfContact; i++)
	{
		contactInfo[i].getContact(name, phoneNumber, email, address);
		if (strcmp(inName, name) == 0)
		{
			cout << "����ó �̸�: " << name << endl;
			cout << "����ó ��ȭ��ȣ: " << phoneNumber << endl;
			cout << "����ó �̸��� : " << email << endl;
			cout << "����ó �ּ�: " << address << endl;
		}
	}
}

// ����ó ����
void Contact::editContacByIdx(int idx,char *inName, char *inPhone,
	char *inMail, char *inAddress)
{
	contactInfo[idx].editContact(inName, inPhone, inMail, inAddress);
}

// ����ó ����
void Contact::copyContact(int idx)
{
	contactInfo[numberOfContact] = PersonalContact(contactInfo[idx]);
}

// ����ó ����
void Contact::removeContactByIdx(int idx)
{

}