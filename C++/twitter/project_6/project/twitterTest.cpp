#include <iostream>
#include <fstream>
#include "include/freelecTwitcurl.h"

using namespace std;

int main(int argc, char* argv[])
{
	freelecTwitCurl twitterObj;		// freelect-twitCurl ��ü

	// Ʈ���� ���̵� �� ��й�ȣ ����
	string userName("aaa");
	string passWord("bbb");

	// twitCurl ��ü�� ���̵� �н����� ����
	twitterObj.setTwitterUsername(userName);
	twitterObj.setTwitterPassword(passWord);
	
	// ConsumerKey �� SecretKey b����
	twitterObj.setConsumerKey(string("q34cgyZElaweT85S77T2CO7vG"));
	twitterObj.setConsumerSecret(string("8oheu5rdszNML5cA3Sh8TL7raHTZqBlbibRg45BS54Ixn3jSw2"));

	// �����ϱ�
	twitterObj.performAuth();

	// Ʈ���� follow ���̵� �ҷ�����
	string nextCursor("");			// "" ����
	string UserID("wodml9412");		// request ���� Ʈ���� ���� �̸�

	// friendsIdsGet �Լ� ȣ��, friends/ids�� request�� ������.
	if (twitterObj.friendsIdsGet(nextCursor, UserID) == false)
	{
		cout << "Error!!" << endl;
	}

	// ids �׸� �Ľ��ؼ� �����´�. friends / ids -> �ڽ��� �ȷο� �ϰ��ִ� ����� ���̵� �����´�.
	string result = twitterObj.friendsIdsParse("ids");

	// ȭ�鿡 ���
	cout << "freelec-twitcurl test(friends/ids)" << endl;
	cout << result << endl;


}