#pragma once
#ifndef __CONTACT_H__
#define __CONTACT_H__

#include <iostream>
#include "PersonalContact.h"

using namespace std;

class Owner;

// ����ó ��ü�� �����ϴ� Ŭ����
class Contact
{
private:
	PersonalContact *contactInfo; // 100 �� ����ó ���� ������ �迭
	int numberOfContact; // ���� ����� ����ó ����

public:
	// ������ - ��� �ʱ�ȭ�� ���� ����
	Contact();
	// �Ҹ��� - contactInfo �޸� ����
	~Contact();
	// ����ó ���� �Է�
	void inputContact(char *inName, char *inPhone = NULL,
		char *inMail = NULL, char *inAddress = NULL);
	// ����ó ��ü ��� ��ȸ
	void printContactList();
	// ����ó �� ��ȸ - �Լ� ���� �ε�
	void printContact(int idx);
	void printContact(char *name);
	// ����ó ����
	void editContacByIdx(int idx,char *name, char *phone = NULL,
		char *email = NULL, char *address = NULL);
	// ����ó ����
	void copyContact(int idx);
	// ����ó ����
	void removeContactByIdx(int idx);
	// Ʈ���� ����ó ����
	void retrieveTwitterFollowing(Owner &owner);
};




#endif // !__CONTACT_H__
