//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Person - 01
//
//
//

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Person
{
public:
	string firstName;
	string secondName;
};



int main()
{
	Person person;
	person.firstName = "Sabino";
	person.secondName = "D'Argenio";

	cout << person.firstName << " " << person.secondName << endl;


	return 0;
}