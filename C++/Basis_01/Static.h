//////////////////////////////////////////////////////////////////////////////
//
// Static
//
//


#include <iostream>
using namespace std;

class Cow
{
	int maxHeartBeats; // attribute#
	char mySuperChar;
public:
	Cow(int maxBeats, char myChar)
	{
		maxHeartBeats = maxBeats;
		mySuperChar = myChar;
	}
	void moo()
	{
		cout << "Mooooo " << maxHeartBeats << endl;
	}
	void moo_two()
	{
		cout << "Hey " << mySuperChar << endl;
	}
};

void main()
{
	Cow beatsy(2, 'c');
	Cow georgy(78, 'c');
	beatsy.moo();
	georgy.moo_two();
}