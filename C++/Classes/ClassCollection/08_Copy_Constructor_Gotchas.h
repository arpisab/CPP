//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Copy Constructors Gotchas 
/*
In thi example we notice how betzy object constractor "deletes" calf before
george object can use it and the compiler crashes...
*/

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

struct Calf { int afoij; };

struct Cow
{
	int numSteaks;
	Calf* calf;
	Cow() { calf = new Calf; }
	~Cow() { delete calf; }
};

void main()
{
	Cow betzy;
	{
		Cow george(betzy);
	}
	cout << "leaving me" << endl;
}