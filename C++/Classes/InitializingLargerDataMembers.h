//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Initializing Larger Data Members
//
//

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Heart
{
	int numBeatsLeft;
public:
	Heart()
	{
		cout << "Heart()" << endl;
		numBeatsLeft = 0;
	}

	Heart(int numBeats)
	{
		cout << "Heart(" << numBeats << ")" << endl;
		numBeatsLeft = numBeats;
	}
};

class Cat
{
	Heart heart;
	string name;
public:
	Cat() : heart(123456), name("Bruff")
	{
		cout << "Cat()" << endl;
		name = "Bruff";
	}
};

void main()
{
	Cat bruff;
}