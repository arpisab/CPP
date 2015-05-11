//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// vPointer and vTable
/*

*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

struct Animal {
	virtual void makeSound() { cout << "Animallllll" << endl; }
	virtual void walk() {}
	void sleep() {}
};

struct Cow : public Animal { void makeSound() { cout << "Moooo" << endl; } };
struct Pig : public Animal {
	void makeSound() { cout << "Oink" << endl; }
	void walk() { }
};
struct Donkey : public Animal { void makeSound() { cout << "Hee Haw" << endl; } };

void main()
{
	/*Cow betsy;
	betsy.makeSound();
	Pig wilbur;
	wilbur.makeSound();
	Donkey donkey;
	donkey.makeSound();*/

	/// Let's apply polymorfism
	srand(time(0));
	Animal* animal;
	switch (rand() % 3)
	{
	case 0:
		animal = new Cow;
		break;
	case 1:
		animal = new Pig;
		break;
	case 2:
		animal = new Donkey;
		break;
	}
	animal->makeSound();
	animal->walk();
	delete animal;
}