//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// vPointer Address Value
/*

*/

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
using namespace std;

class Base;

void showVptr(Base* instance) // pointer instance points to the Base class
{
	int* intPtr = reinterpret_cast<int*>(instance);
	cout << *intPtr << endl;
}

class Base
{
	virtual void foo() { }
};

class Derived1 : public Base {};
class Derived2 : public Base {};



void main()
{
	Base b;
	Derived1 d1;
	Derived2 d2;
	showVptr(&b);
	showVptr(&d1);
	showVptr(&d2);
	Derived1 d1_1;
	showVptr(&d1_1);

}