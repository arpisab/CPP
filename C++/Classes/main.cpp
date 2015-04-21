//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Destructors and Stack Unwinding
// GOOD Example of LIFO with car 3
//
//

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

struct Car
{
	static int count;
	int id;
	Car() { 
		id = count++;
		cout << "Car(" << id << ")" << endl; 
	}
	~Car() { 
		cout << "~Car(" << id << ")" << endl; 
	}
};

int Car::count = 1;

void main()
{
	Car car1;
	{
		Car car2;
	}
	Car car3;
}