#include "Contact.h"
#include "freelecTwitcurl.h"
#include "Owner.h"

using namespace std;

// 생성자
Contact::Contact()
{
	contactInfo = new PersonalContact[100];
	numberOfContact = 0;
}

// 소멸자 메모리해제
Contact::~Contact()
{
	delete[] contactInfo;
}

// 연락처 정보 입력
void Contact::inputContact(char *name, char *phone,
	char *mail, char *address)
{
	contactInfo[numberOfContact].inputContact(name, phone, mail, address);
	numberOfContact++;
}

// 연락처 전체 목록 조회
void Contact::printContactList()
{
	char name[30];
	for (int i = 0; i < numberOfContact; i++)
	{
		contactInfo[i].getContact(name, NULL, NULL, NULL);
		cout << i << " : " << name << endl;
	}
}

// 연락처 상세 조회 :index
void Contact::printContact(int idx)
{
	char name[20];
	char phoneNum[13];
	char mail[30];
	char address[50];

	contactInfo[idx].getContact(name, phoneNum, mail, address);
	cout << idx << "의 idx를 가진 연락처 조회" << endl;
	cout << "연락처 이름: " << name << endl;
	cout << "연락처 전화번호: " << name << endl;
	cout << "연락처 이메일: " << name << endl;
	cout << "연락처 주소: " << name << endl;
}

// 연락처 상세 조회 : 이름 (함수 오버로딩)
void Contact::printContact(char *inName)
{
	char name[20];
	char phoneNumber[13];
	char email[30];
	char address[50];

	cout << inName << "을 가진 연락처 조회" << endl;

	for (int i = 0; i < numberOfContact; i++)
	{
		contactInfo[i].getContact(name, phoneNumber, email, address);
		if (strcmp(inName, name) == 0)
		{
			cout << "연락처 이름: " << name << endl;
			cout << "연락처 전화번호: " << phoneNumber << endl;
			cout << "연락처 이메일 : " << email << endl;
			cout << "연락처 주소: " << address << endl;
		}
	}
}

// 연락처 수정
void Contact::editContacByIdx(int idx,char *inName, char *inPhone,
	char *inMail, char *inAddress)
{
	contactInfo[idx].editContact(inName, inPhone, inMail, inAddress);
}

// 연락처 복사
void Contact::copyContact(int idx)
{
	contactInfo[numberOfContact] = PersonalContact(contactInfo[idx]);
}

// 연락처 제거
void Contact::removeContactByIdx(int idx)
{

}