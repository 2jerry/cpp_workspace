#include <iostream>
using namespace std;

class File
{
public:
	void load()
	{
		cout << "mp3 파일을 메모리에 올린다" << endl;
	}
};

class PowerDevice
{
public:
	void powerUp()
	{
		cout << "mp3 play를 위한 파워를 올린다" << endl;
	}
};

class Memory
{
public:
	void expand()
	{
		cout << "mp3 play를 위한 메모리를 늘린다." << endl;
	}
};

class MP3
{
private:
	File file;
	PowerDevice powerdevice;
	Memory memory;


public:
	void play()
	{
		powerdevice.powerUp();
		memory.expand();
		file.load();
		cout << "mp3를 play 한다." << endl;
	}
};

int main()
{
	MP3 mp3;	
	mp3.play();
}