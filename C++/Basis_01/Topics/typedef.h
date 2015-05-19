/////////////////////////////////////////////////////////////////////////////////////////
//
// C++ typedef
//
// 

#include <iostream>
using namespace std;

typedef float FLOAT32;
typedef double FLOAT64;

struct typeDef
{
	FLOAT32 myFloat;
	FLOAT64 myDoubleFloat;
};

int main() {

	typeDef tD;

	cout << "32 Bit Float is " << sizeof(tD.myFloat) << "\n";
	cout << "64 Bit Double is " << sizeof(tD.myDoubleFloat) << "\n";

	system("PAUSE");

	return 0;
}

//

#include <iostream>
using namespace std;

#define YOU

void main()
{

	int a = 10, b = 10, c = 10;

#ifndef YOU

	int a = 1, b = 1, c = 1;

#endif

	printf("%d %d %d \n", a, b, c);

	system("PAUSE");

}