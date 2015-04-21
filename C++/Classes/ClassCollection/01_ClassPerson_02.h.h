//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Person - 02 - Constructors and Destructors
//
//	Here we learnt about F10 and F11, Step IN and Step Over debugging
//

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;



class Person
{
public:
	// Constuctor Person
	Person()
	{
		cout << "Person()" << endl;
	}
	// Destructors ~Person
	~Person()
	{
		cout << "~Person()" << endl;
	}
};



void main()
{
	// Case 1 - Destructor executes before the second statemets
	cout << "Before the scoped block" << endl;
	{
		Person person; // the contructor executes between the two statements
	}
	cout << "After the scoped bloked" << endl;

	cout << "\n\n\n";

	// Case 2 - - Destructor executes after the second statemets
	cout << "Before the scoped block" << endl;
	Person person; // the contructor executes between the two statements
	cout << "After the scoped bloked" << endl;

}