//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Deep and Shallow Copy Constructors
/*
A shallow copy of an object copies all of the member field values.
This works well if the fields are values, but may not be what you want for
fields that point to dynamically allocated memory. The pointer will be copied. but
the memory it points to will not be copied -- the field in both the original object and
the copy will then point to the same dynamically allocated memory, which is not usually what you want.
The default copy constructor and assignment operator make shallow copies.

A deep copy copies all fields, and makes copies of dynamically allocated memory pointed to by
the fields. To make a deep copy, you must write a copy constructor and overload the assignment
operator, otherwise the copy will point to the original, with disasterous consequences.
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
	Cow() { calf = new Calf; } // betzy constuctor - "shallow copy"

	Cow(const Cow& original) // copy constructor for george
	{
		numSteaks = original.numSteaks;
		calf = new Calf(*original.calf); // "george constructor - deep copy"
	}

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