//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Static Class Members - Variables
//
//

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class MyClass
{
private:
	static int myStaticInt; //  Static Class Members DECLARATION
public:
	void someFunction()
	{
		myStaticInt++;
	}
};

int MyClass::myStaticInt = 5; //  Static Class Members DEFINITION in the "compilation unit"

void main()
{
	MyClass::someFunction; // class function implementation
	MyClass::myStaticInt; // this won't work cause it's private
}