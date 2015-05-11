//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// vPointer Virtual
/*

*/

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
using namespace std;

class Base
{
	int baseIntMember;
	virtual void doSomething()
	{
		cout << "Base::doSomething()" << endl;
	}
};

class Derived : public Base
{
	int derivedIntMember;
	void doSomething()
	{
		cout << "Derived::Base::doSomething()" << endl;
	}
};

void main()
{
	cout << sizeof(Base) << endl;
	cout << sizeof(Derived) << endl;
}