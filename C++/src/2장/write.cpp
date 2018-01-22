#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	ofstream ofs;
	ofs.open("file.txt");

	ofs.write("This is an apple", 16);
	long pos = ofs.tellp(); // tellp를 이용해 파일의 현재 위치를 얻는다.

	ofs.seekp(pos - 7);
	ofs.write(" sam", 4);

	ofs.close();
	return 0;
}