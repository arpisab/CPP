//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Const Initializer Lists
//
//

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

struct Cat
{
	int catLives;
	Cat(int cLives)
	{
		catLives = cLives;
	}
};

struct Dog
{
	const int DOG_LIVES;

	// The Initializer List runs before the body of the constructor and needs to be const
	
	Dog(int dLives) : DOG_LIVES(dLives) // The member Initializer List
	{
	}
};

void main()
{
	Cat bruff(5);
	cout << bruff.catLives << endl;
	Dog math(10);
	cout << &(math.DOG_LIVES) << endl;
}