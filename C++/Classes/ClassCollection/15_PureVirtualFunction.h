//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Pure Virtual Function or abstract method
/*

*/

#include <iostream>
using namespace std;

struct Base {
	int intMember;

	// abstract or pure virtual function is denotated by "= 0" which is a flag to the parser, 
	// which is part of the compailer.
	// it says this function hasn't got a body, somebody else has to define it.
	virtual void foo() = 0;
};

struct Derived : public Base
{
	void foo() {}
};

void main()
{
	/* The object below is invalid but interestringly the Derived class is
	Base base;
	base.foo;
	*/

	Derived derived;
	derived.foo;

}