#include <iostream>
using namespace std;

class File
{
public:
	void load()
	{
		cout << "mp3 ������ �޸𸮿� �ø���" << endl;
	}
};

class PowerDevice
{
public :
	void powerUp()
	{
		cout << "mp3 play�� ���� �Ŀ��� �ø���" << endl;
	}
};

class Memory
{
public:
	void expand()
	{
		cout << "mp3 play�� ���� �޸𸮸� �ø���." << endl;
	}
};

class MP3
{
public:
	void play()
	{
		cout << "mp3�� play �Ѵ�." << endl;
	}
};

int main()
{
	PowerDevice powerdevice;
	Memory memory;
	File file;
	MP3 mp3;

	powerdevice.powerUp();
	memory.expand();
	file.load();
	mp3.play();
}