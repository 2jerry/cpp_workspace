#pragma once
#include <iostream>
#include "Contact.h"

#ifndef __OWNER_H__
#define __OWNER_H__

class Owner
{
private:
	char name[20];
	char phoneNum[13];
	char email[30];
	char address[50];
	char twitterAcc[20];

public:
	// 소유자 정보 입력
	void inputOwnerInfo(char *inName, char *inPhone = NULL,
		char *inMail = NULL, char *inAddress = NULL , char *twitterAcc = NULL);
	// 소유자 정보 출력
	void printOwnerInfo();
	// 소유자 정보 수정
	void editOwnerInfo(char *inName, char *inPhone = NULL,
		char *inMail = NULL, char *inAddress = NULL, char *twitterAcc = NULL);

	// Contact 멤버 함수의 friend 선언
	friend void Contact::retrieveTwitterFollowing(Owner &owner);
};

#endif