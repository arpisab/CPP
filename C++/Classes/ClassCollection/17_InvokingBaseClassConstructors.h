//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Invoking Base Class Constructors from Derived Constructors
/*

*/

#include <iostream>
using namespace std;

class Base
{
public:
	Base(int i) {}
};

class Derived : public Base
{
public:
	Derived(int param) : Base(9) {}

};

void main()
{
	Derived derived(123);


}