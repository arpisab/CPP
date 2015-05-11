//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Constructor is a stupid word
/*

The constructor does not construct the object. "new operator" allocates the object on the heap "RAM"

*/

#include <iostream>
using namespace std;

struct Base
{
	virtual void foo() { cout << "Base::foo()" << endl; }
};

struct Derived : public Base
{
	void somethingelse()
	{
		foo();
		cout << "Derived::foo" << endl;

	}
};

void main()
{
	/*Base *base = new Derived;
	base->foo();*/


	Derived d;
	d.somethingelse();


}