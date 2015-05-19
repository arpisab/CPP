#include <iostream>
#include <stdio.h>







int main()
{
	int a;
	int* p;
	a = 59;
	printf("This is the value of a: %d \n", a);
	p = &a; // address of  
	*p = 10; // "dereferencing"
	printf("This is the value of a after being deferenced by p: %d \n", a);
	printf("This is the size of a: %d %s \n", sizeof(a), "Bytes");
	printf("This is the size of p: %d \n\n", sizeof(p));
	printf("This is the address of a: %d \n", &a);
	printf("This is the address of p: %d \n\n", p);

	// pointer arithmetic
	std::cout << "Pointer Arithmetic --------------" << std::endl;
	printf("This is p + 1: %d \n", p + 1); // this will give the address + 1 integer that is 4 bytes
	printf("This is p + 2: %d \n", p + 2);
	printf("This is p + 3: %d \n\n", p + 3);

	std::cout << "Pointer Arithmetic --------------" << std::endl;


	return 0;
}