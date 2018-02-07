#include <iostream>
#include <fstream>
#include <string>

#define OWNER 1
#define CONTACT 0

using namespace std;


struct OwnerInfo {
	char name[10];
	char phoneNumber[13];
	char email[30];
	char address[50];
} owner;
struct ContactInfo {
	char name[10];
	char phoneNumber[13];
	char email[30];
	char address[50];
} contacts[100];
int contactNumber = 0;


void ownerWriteFile(OwnerInfo owner1);
void contactWriteFile(ContactInfo contact);
void inputOwnerInfo();
void outputOwnerInfo();
void addContact();
void outputContactList();
void runOwnerMenu();
void runContactMenu();
void runMainMenu();
int removeContactByIndex(int index);
void editOwnerInfo();
int removeContactByIndex(int index);
void printContactInfoByIndex(int index);


void ownerWriteFile(OwnerInfo owner1)
{
	OwnerInfo con = owner1;
	
	fstream ofs("o_info.txt",ios::app);
	ofs <<"이름 : " <<con.name << endl;
	ofs << "연락처 : " <<con.phoneNumber << endl;
	ofs << "이메일 : "<<con.email << endl;
	ofs << "주소 : "<<con.address << endl;
	

	ofs.close();
}
void contactWriteFile(ContactInfo contact)
{
	ContactInfo con = contact;

	fstream ofs("c_info.txt", ios::app);
	ofs << "이름 : " << con.name << endl;
	ofs << "연락처 : " << con.phoneNumber << endl;
	ofs << "이메일 : " << con.email << endl;
	ofs << "주소 : " << con.address << endl;


	ofs.close();
}

void inputOwnerInfo()
{
	cout << "소유자 이름 : ";
	cin >> owner.name;
	
	cout << "소유자 전화번호 : ";
	cin >> owner.phoneNumber;

	cout << "소유자 이메일 : ";
	cin >> owner.email;

	cout << "소유자 주소 : ";
	cin >> owner.address;

	ownerWriteFile(owner);

	cout << "입력이 완료되었습니다." << endl;
}

void outputOwnerInfo()
{
	cout << "소유자 이름: " << owner.name << endl;
	cout << "소유자 전화번호: " << owner.phoneNumber << endl;
	cout << "소유자 이메일: " << owner.email << endl;
	cout << "소유자 주소: " << owner.address << endl;
	
	/*
	fstream ifs("o_info.txt",ios::in);
	string str;
	ifs >> str ;
	cout << str << endl;
	ifs.close();
	*/
}

void addContact()
{
	cout << "연락처 이름 : ";
	cin >> contacts[contactNumber].name;

	cout << "연락처 전화번호: ";
	cin >> contacts[contactNumber].phoneNumber;

	cout << "연락처 이메일 : ";
	cin >> contacts[contactNumber].email;

	cout << "연락처 주소 : ";
	cin >> contacts[contactNumber].address;

	contactWriteFile(contacts[contactNumber]);

	contactNumber++;
	cout << "입력이 완료되었습니다." << endl;

}

void outputContactList()
{
	/*fstream ifs("c_info.txt", ios::in);
	string str;
	ifs >> str;
	cout << str << endl;
	ifs.close();*/
	
	int i;
	for (i = 0; i < contactNumber; i++)
		cout << i << " : " << contacts[i].name << endl;
		
}

void runOwnerMenu()
{
	int menuNum;

	do {
		cout << "1. 소유자 정보 입력" << endl;
		cout << "2. 소유자 정보 조회" << endl;
		cout << "3. 소유자 정보 수정" << endl;
		cout << "4. 이전 화면" << endl;
		cin >> menuNum;

		switch (menuNum)
		{
		case 1:
			inputOwnerInfo();
			break;
		case 2:
			outputOwnerInfo();
			break;
		case 3:
			editOwnerInfo();
			break;
		case 4:
			break;
		default:
			cout << "다시 입력하세요." << endl;
		}
	} while (menuNum != 4);
}

void runContactMenu()
{
	int menuNum,index,res;

	do {
		cout << "1. 연락처 추가 입력" << endl;
		cout << "2. 연락처 목록 조회" << endl;
		cout << "3. 연락처 목록 삭제" << endl;
		cout << "4. 연락처 상세 조회" << endl;
		cout << "5. 이전 화면" << endl;
		cin >> menuNum;

		switch (menuNum)
		{
		case 1:
			addContact();
			break;
		case 2:
			outputContactList();
			break;
		case 3:
			cout << "삭제할 연락처 : ";
			cin >> index;
			res = removeContactByIndex(index);
			if (res)
				cout << "정상 삭제" << endl;
			else
				cout << "비정상 삭제" << endl;
			break;
		case 4:
			cout << "조회할 연락처 : ";
			cin >> index;
			printContactInfoByIndex(index);
			
		case 5:
			cout << "이전화면" << endl;
			break;
		default:
			cout << "다시 입력하세요." << endl;

		}
	} while (menuNum != 5);
}

void runMainMenu()
{
	int menuNum;

	do {
		cout << "1. 소유자 관리 기능" << endl;
		cout << "2. 연락처 관리 기능" << endl;
		cout << "3. 프로그램 종료" << endl;
		cin >> menuNum;

		switch (menuNum)
		{
		case 1:
			runOwnerMenu();
			break;
		case 2:
			runContactMenu();
			break;
		case 3:
			cout << "프로그램을 종료합니다." << endl;
			break;
		default:
			cout << "다시 입력하세요." << endl;

		}
	} while (menuNum != 3);
}

void editOwnerInfo()// 소유자 정보 수정
{
	int inputNum;

	cout << "1. 소유자 이름 수정 " << endl;
	cout << "2. 소유자 전화번호 수정 " << endl;
	cout << "3. 소유자 이메일 수정 " << endl;
	cout << "4. 소유자 주소 수정 " << endl;
	cout << "5. 이전메뉴 " << endl;

	cin >> inputNum;

	switch (inputNum)
	{
	case 1:
		cin >> owner.name;
		break;
	case 2:
		cin >> owner.phoneNumber;
		break;
	case 3:
		cin >> owner.email;
		break;
	case 4:
		cin >> owner.address;
		break;
	default:
		cout << "수정 아무것도 안됌" << endl;
		break;
	}
}

int removeContactByIndex(int index) //  연락처 제거
{
	if ((index >= contactNumber) || (index < 0))
		return 0;

	int i;
	for (i = index + 1; i < contactNumber; i++)
		*(contacts + i - 1) = *(contacts + i); // 뒤의 배열의 요소를 덮어 씌운다,

	contactNumber--;

	return 1;
}

void printContactInfoByIndex(int index)
{
	cout << index << "의 index를 가진 연락처 조회" << endl;
	cout << "연락처 이름 : " << contacts[index].name << endl;
	cout << "연락처 전화번호 : " << contacts[index].phoneNumber << endl;
	cout << "연락처 이메일 : " << contacts[index].email << endl;
	cout << "연락처 주소 : " << contacts[index].address << endl;


}

int main()
{
	runMainMenu();
	return 0;
}