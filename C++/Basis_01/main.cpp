#include <iostream>
#include <stdio.h>
#include <glut.h>

using namespace std;

int main() {


	int a = 5;

	int *p;

	p = &a;

	printf("%i \n", p); // It prints a position in memory
	printf("%d \n", p); // It prints a position in memory
	printf("%p \n", p); // It prints p position in memory
	printf("%d \n", a); // It prints a value
	printf("%d \n", &a); // It prints a position in memory

	printf("%d \n", *p); // It prints value at address - "dereferencing"

	*p = 8;
	printf("%d \n", *p);
	printf("%d \n", a);

	system("PAUSE");

	return 0;
}