//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Compiler - Generated Default Constructors
//
//

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;



class Person {
public:
	int myPerson;
	Person(){} // Parameterless Constructor
	Person(int value){ } // Parameterised Constructor
};



void main()
{
	Person p;
	cout << p.myPerson << endl;

}