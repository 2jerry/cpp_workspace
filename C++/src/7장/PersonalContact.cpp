#include "PersonalContact.h"

// 복사 생성자
PersonalContact::PersonalContact(PersonalContact &personal)
{
	strcpy_s(name, 20, personal.name);
	strcpy_s(phoneNum, 13, personal.phoneNum);
	strcpy_s(email, 30, personal.email);
	strcpy_s(name, 50, personal.address);
}

void PersonalContact::inputContact(char *inName, char *inPhone,
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

void PersonalContact::getContact(char *outName, char *outPhone,
	char *outMail, char *outAddress)
{
	if (outName != NULL)
		strcpy_s(outName, 20, name);
	if (outPhone != NULL)
		strcpy_s(outPhone, 13, phoneNum);
	if (outMail != NULL)
		strcpy_s(outMail, 30, email);
	if (outAddress != NULL)
		strcpy_s(outAddress, 50, address);
}

void PersonalContact::editContact(char *inName, char *inPhone,
	char *inMail, char *inAddress)
{
	if (inName != NULL)
		strcpy_s(inName, 20, inName);
	if (inPhone != NULL)
		strcpy_s(inPhone, 13, inPhone);
	if (inMail != NULL)
		strcpy_s(inMail, 30, inMail);
	if (inAddress != NULL)
		strcpy_s(inAddress, 50, inAddress);
}