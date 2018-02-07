#include <iostream>
#include <fstream>
#include "include/freelecTwitcurl.h"

using namespace std;

int main(int argc, char* argv[])
{
	freelecTwitCurl twitterObj;		// freelect-twitCurl 객체

	// 트위터 아이디 및 비밀번호 설정
	string userName("aaa");
	string passWord("bbb");

	// twitCurl 객체에 아이디 패스워드 설정
	twitterObj.setTwitterUsername(userName);
	twitterObj.setTwitterPassword(passWord);
	
	// ConsumerKey 및 SecretKey b생성
	twitterObj.setConsumerKey(string("q34cgyZElaweT85S77T2CO7vG"));
	twitterObj.setConsumerSecret(string("8oheu5rdszNML5cA3Sh8TL7raHTZqBlbibRg45BS54Ixn3jSw2"));

	// 인증하기
	twitterObj.performAuth();

	// 트위터 follow 아이디 불러오기
	string nextCursor("");			// "" 생략
	string UserID("wodml9412");		// request 보낼 트위터 계정 이름

	// friendsIdsGet 함수 호출, friends/ids에 request를 보낸다.
	if (twitterObj.friendsIdsGet(nextCursor, UserID) == false)
	{
		cout << "Error!!" << endl;
	}

	// ids 항목 파싱해서 가져온다. friends / ids -> 자신이 팔로우 하고있는 사람의 아이디를 가져온다.
	string result = twitterObj.friendsIdsParse("ids");

	// 화면에 출력
	cout << "freelec-twitcurl test(friends/ids)" << endl;
	cout << result << endl;


}