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
	cout << "������ �̸� : " << name << endl;
	cout << "������ ��ȭ��ȣ : " << phoneNum << endl;
	cout << "������ �����ּ� : " << email << endl;
	cout << "������ �ּ� : " << address << endl;
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