#include <iostream>
#include <fstream>

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

void writeFile(ContactInfo contact)
{
	ContactInfo con = contact;
	ofstream ofs("info.txt",ios::app);
	ofs <<"이름 : " <<con.name << endl;
	ofs << "연락처 : " <<con.phoneNumber << endl;
	ofs << "이메일 : "<<con.email << endl;
	ofs << "주소 : "<<con.address << endl;
	

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

	cout << "입력이 완료되었습니다." << endl;
}

void outputOwnerInfo()
{
	cout << "소유자 이름: " << owner.name << endl;
	cout << "소유자 전화번호: " << owner.phoneNumber << endl;
	cout << "소유자 이메일: " << owner.email << endl;
	cout << "소유자 주소: " << owner.address << endl;
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

	writeFile(contacts[contactNumber]);

	contactNumber++;
	cout << "입력이 완료되었습니다." << endl;

	
}

void outputContactList()
{
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
		cout << "3. 이전 화면" << endl;
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
			cout << "프로그램을 종료합니다." << endl;
			break;
		default:
			cout << "다시 입력하세요." << endl;
		}
	} while (menuNum != 3);
}

void runContactMenu()
{
	int menuNum;

	do {
		cout << "1. 연락처 추가 입력" << endl;
		cout << "2. 연락처 목록 조회" << endl;
		cout << "3. 이전 화면" << endl;
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
			cout << "프로그램을 종료합니다." << endl;
			break;
		default:
			cout << "다시 입력하세요." << endl;

		}
	} while (menuNum != 3);
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

int main()
{
	runMainMenu();
	return 0;
}