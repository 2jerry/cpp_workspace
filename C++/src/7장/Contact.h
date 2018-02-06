#pragma once
#include <iostream>
#include "PersonalContact.h"

#ifndef __CONTACT_H__
#define __CONTACT_H__

// 연락처 전체를 관리하는 클래스
class Contact
{
private:
	PersonalContact contactInfo[100]; // 100 명 연락처 저장 가능한 배열
	int numberOfContact; // 현재 저장된 연락처 개수

public:
	// 생성자 - 멤버 초기화를 위해 생성
	Contact();
	// 연락처 정보 입력
	void inputContact(char *inName, char *inPhone = NULL,
		char *inMail = NULL, char *inAddress = NULL);
	// 연락처 전체 목록 조회
	void printContactList();
	// 연락처 상세 조회 - 함수 오버 로딩
	void printContact(int idx);
	void printContact(char *inName);
	// 연락처 수정
	void editContacByIdx(char *inName, char *inPhone = NULL,
		char *inMail = NULL, char *inAddress = NULL);
	// 연락처 복사
	void copyContact(int idx);
	// 연락처 제거
	void removeContactByIdx(int idx);
};




#endif // !__CONTACT_H__
