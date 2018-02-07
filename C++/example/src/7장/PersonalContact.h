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
	// 기본 생성자
	PersonalContact() {}
	// 복사 생성자
	PersonalContact(PersonalContact &personal);
	// 연락처 입력
	void inputContact(char *inName, char *inPhone = NULL,
		char *inMail = NULL, char *inAddress = NULL);
	// 연락처 조회
	void getContact(char *outName, char *outPhone, char *outMail, char *outAddress);
	// 연락처 수정
	void editContact(char *inName, char *inPhone = NULL,
		char *inMail = NULL, char *inAddress = NULL);
};

#endif