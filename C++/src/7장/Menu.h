#pragma once
#include <iostream>

#ifndef __MENU_H__
#define __MENU_H__

#endif // !__MENU_H__

// ���� �޴� ���� Ŭ����
class Menu
{
private:
	char topMenu[3][32];      // �ֻ��� �޴� ����
	char ownerMenu[4][32];    // ������ �޴� ����
	char contactMenu[7][32];  // ����ó �޴� ����
	int menuType; // 0: �ֻ��� �޴�, 1: ������ �޴�, 2: ����ó �޴�

public:
	Menu();				// ������
	void showMenu();	// ���� �޴� ���� ���¸� ���� ��� ���
	void setMenuSelection(int selection);
	void execution();	// ������ �޴� ����
};