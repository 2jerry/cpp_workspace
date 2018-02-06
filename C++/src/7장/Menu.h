#pragma once
#include <iostream>

#ifndef __MENU_H__
#define __MENU_H__

#endif // !__MENU_H__

// 조작 메뉴 설계 클래스
class Menu
{
private:
	char topMenu[3][32];      // 최상위 메뉴 정보
	char ownerMenu[4][32];    // 소유자 메뉴 정보
	char contactMenu[7][32];  // 연락처 메뉴 정보
	int menuType; // 0: 최상위 메뉴, 1: 소유자 메뉴, 2: 연락처 메뉴

public:
	Menu();				// 생성자
	void showMenu();	// 현재 메뉴 선택 상태를 통해 목록 출력
	void setMenuSelection(int selection);
	void execution();	// 선택한 메뉴 실행
};