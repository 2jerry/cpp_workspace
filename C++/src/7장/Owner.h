#pragma once
#include <iostream>

#ifndef __OWNER_H__
#define __OWNER_H__

class Owner
{
private:
	char name[20];
	char phoneNum[13];
	char email[30];
	char address[50];

public:
	// ������ ���� �Է�
	void inputOwnerInfo(char *inName, char *inPhone = NULL,
		char *inMail = NULL, char *inAddress = NULL);
	// ������ ���� ���
	void printOwnerInfo();
	// ������ ���� ����
	void editOwnerInfo(char *inName, char *inPhone = NULL,
		char *inMail = NULL, char *inAddress = NULL);
};

#endif