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

struct Base
{
	int intMember1;
	int intMember2;
	virtual void foo() { }
};


void main()
{
	Base base1;
	Base base2;
	base1.intMember1 = 23;
	base2.intMember2 = 98;

	int* intPtr1 = reinterpret_cast<int*>(&base1); // returns the address of base
	cout << *intPtr1 << endl; // returns the address of base
	intPtr1++;
	cout << *intPtr1 << endl; // returns the value of the member of base

	// the second pointer does not work!!
	int* intPtr2 = reinterpret_cast<int*>(&base2);
	cout << *intPtr2 << endl; // returns the value of the member of base
	intPtr2++;
	cout << *intPtr2 << endl; // returns the value of the member of base



}