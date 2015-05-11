//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Virtual Destructors
/*

*/

#include <iostream>
using namespace std;

struct Base
{
	Base() { cout << "Base()" << endl; }
	virtual ~Base() { cout << "~Base" << endl; } // if we insert virtual we can then see the destructor
};

struct Derived : public Base
{
	Derived() { cout << "Derived()" << endl; }
	~Derived() { cout << "~Derived()" << endl; }
};

void main()
{
	// Derived derived;  Here the Destractors execute

	//Derived* derived = new Derived;
	//delete derived;

	Base *base = new Derived;
	delete base;
}