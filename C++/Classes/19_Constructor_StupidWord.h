//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Invoking Base Class Functions Using the Scope Resolution Operator


#include <iostream>
using namespace std;

class Base
{
protected:
	int meInt;
public:
	void initialize() {
		meInt = 50;
		cout << "Base()" << meInt << endl;
	}
};

class Derived : public Base
{
	float meFloat;
public:
	void initialize()
	{
		Base::initialize();
		meFloat = meInt;
		cout << "Derived()" << meFloat << endl;
	}
};

void main()
{
	Derived d;
	d.initialize();
}