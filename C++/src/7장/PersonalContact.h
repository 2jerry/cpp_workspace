#pragma once

#pragma once
#include <iostream>

#ifndef __PERSONALCONTACT_H__
#define __PERSONALCONTACT_H__

class PersonalContact
{
private:
	char name[20];
	char phoneNum[13];
	char email[30];
	char address[50];

public:
	// �⺻ ������
	PersonalContact() {}
	// ���� ������
	PersonalContact(PersonalContact &personal);
	// ����ó �Է�
	void inputContact(char *inName, char *inPhone = NULL,
		char *inMail = NULL, char *inAddress = NULL);
	// ����ó ��ȸ
	void getContact(char *outName, char *outPhone, char *outMail, char *outAddress);
	// ����ó ����
	void editContact(char *inName, char *inPhone = NULL,
		char *inMail = NULL, char *inAddress = NULL);
};

#endif