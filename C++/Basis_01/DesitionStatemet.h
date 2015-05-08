//////////////////////////////////////////////////////////////////////////////
//
// The ?...:... operator is a sort of shorthand if...else... statement. 
// Because it is a little cryptic, it is not often used, but the basic form is as follows: 
// (condition) ? expression1 : expression2;
//


#include <iostream>
using namespace std;


void main()
{
	int foo = 50;
	int bar = 10;
	int bas;

	if (foo > bar)
	{
		printf("This is foo %d \n", foo);
	}
	else
		printf("This is bas %d \n", bar);

	bas = (foo > bar) ? foo : bar;
	printf("This is bas %d \n", bas);

}