//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Copy Constructors
// 
//
//

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

struct Cow
{
	int numSteaks;
	int numLegs;
};

void main()
{
	Cow betsy;
	betsy.numSteaks = 100;
	betsy.numLegs = 4;
	cout << betsy.numSteaks << " " << betsy.numLegs << endl;
	Cow georgy(betsy);
	cout << georgy.numSteaks << " " << georgy.numLegs << endl;


}