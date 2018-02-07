#pragma once
#include <iostream>

#ifndef __MENU_H__
#define __MENU_H__


// ���� �޴� ���� Ŭ����
class Menu
{
private:
	char **topMenu;      // �ֻ��� �޴� ����
	char **ownerMenu;    // ������ �޴� ����
	char **contactMenu;  // ����ó �޴� ����
	int menuType; // 0: �ֻ��� �޴�, 1: ������ �޴�, 2: ����ó �޴�

	// const ��������
	const int numTopMenu = 3;	  // Top �޴� ����
	const int numOwnerMenu = 4;   // ������ ���� �޴� ���� 
	const int numContactMenu = 8; // ����ó ���� �޴� ����
public:
	Menu();				// ������
	~Menu();			// �Ҹ���
	void showMenu();	// ���� �޴� ���� ���¸� ���� ��� ���
	void setMenuSelection(int selection);
	void execution();	// ������ �޴� ����
};


#endif // !__MENU_H__