//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Inheritance And Class Size
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
	int firstInt;
	int second;
};


class Derived : public Base // The "Derived" class inherits from the "Base" class with this sintax
{
	int derivedMember;
	int anotherDerivedMember;
	int sfgsdfgfg;
};

void main()
{
	cout << sizeof(Base) << endl; // 12 bytes
	cout << sizeof(Derived) << endl;  // notice that the derived class is now 20 bytes!

}