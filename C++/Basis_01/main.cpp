//////////////////////////////////////////////////////////////////////////////
//
// 
/*


*/


#include <iostream>
using namespace std;


void main()
{
	int a = 5;
	int* p;

	p = new int [10];

	printf("Pointer p gives a value = %d \n", p);
	printf("Pointer p gives a value = %d \n", &p);
	printf("Pointer p gives a value = %d \n", &a);
}