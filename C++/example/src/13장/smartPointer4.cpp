#include <iostream>
#include <string>
#include <memory>

using namespace std;

class MyProfile
{
private:
	string name;

public:
	MyProfile(string n)
	{
		name.append(n);
	}
	~MyProfile()
	{
		name.clear();
		//cout << "destructor called." << endl;
	}
	void setName(string n)
	{
		name.clear();
		name.append(n);
	}
	void getName()
	{
		cout << "name: " << name << endl;
	}
};

void referenceCount(shared_ptr<MyProfile> ptr)
{
	cout << "reference count: " << ptr.use_count() << endl;
}

int main()
{
	auto shrdprtProfile1 = make_shared<MyProfile>("allen");
	shrdprtProfile1->getName();
	cout << "reference cout: " << shrdprtProfile1.use_count() << endl;
	referenceCount(shrdprtProfile1);
	cout << "reference cout: " << shrdprtProfile1.use_count() << endl;


	return 0;
}