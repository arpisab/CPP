#include <iostream>
#include <vector>
#include <string>
using namespace std;

//Basic Pointers - referencing and dereferencing 
int main(){

  int c1 = 5;
  int* p1 = &c1;

  printf("c1 = %d  %p\n&c1 = %d  %p\np1 = %d  %p\n*p1 = %d  %p\n\n", c1, c1, &c1, &c1, p1, p1, *p1, *p1);

  int s1;
  int* z1;
  s1 = 5;
  z1 = &s1;

  printf("s1 = %d  %p\n&s1 = %d  %p\nz1 = %d  %p\n*z1 = %d  %p\n", c1, c1, &c1, &c1, p1, p1, *p1, *p1);

  return 0;
}

// case 2
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