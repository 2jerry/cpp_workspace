#pragma once
#include <iostream>
#include "PersonalContact.h"

#ifndef __CONTACT_H__
#define __CONTACT_H__

// ����ó ��ü�� �����ϴ� Ŭ����
class Contact
{
private:
	PersonalContact contactInfo[100]; // 100 �� ����ó ���� ������ �迭
	int numberOfContact; // ���� ����� ����ó ����

public:
	// ������ - ��� �ʱ�ȭ�� ���� ����
	Contact();
	// ����ó ���� �Է�
	void inputContact(char *inName, char *inPhone = NULL,
		char *inMail = NULL, char *inAddress = NULL);
	// ����ó ��ü ��� ��ȸ
	void printContactList();
	// ����ó �� ��ȸ - �Լ� ���� �ε�
	void printContact(int idx);
	void printContact(char *inName);
	// ����ó ����
	void editContacByIdx(char *inName, char *inPhone = NULL,
		char *inMail = NULL, char *inAddress = NULL);
	// ����ó ����
	void copyContact(int idx);
	// ����ó ����
	void removeContactByIdx(int idx);
};




#endif // !__CONTACT_H__
