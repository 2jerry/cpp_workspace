#include "Owner.h"

using namespace std;

void Owner::inputOwnerInfo(char *inName, char *inPhone,
	char *inMail, char *inAddress)
{
	if (inName != NULL)
		strcpy_s(name, 20, inName);
	if (inPhone != NULL)
		strcpy_s(phoneNum, 13, inPhone);
	if (inMail != NULL)
		strcpy_s(email, 30, inMail);
	if (inAddress != NULL)
		strcpy_s(address, 50, inAddress);
}

void Owner::printOwnerInfo()
{
	cout << "소유자 이름 : " << name << endl;
	cout << "소유자 전화번호 : " << phoneNum << endl;
	cout << "소유자 메일주소 : " << email << endl;
	cout << "소유자 주소 : " << address << endl;
}

void Owner::editOwnerInfo(char *inName, char *inPhone,
	char *inMail, char *inAddress)
{
	if (inName != NULL)
		strcpy_s(name, 20, inName);
	if (inPhone != NULL)
		strcpy_s(phoneNum, 13, inPhone);
	if (inMail != NULL)
		strcpy_s(email, 30, inMail);
	if (inAddress != NULL)
		strcpy_s(address, 50, inAddress);
}