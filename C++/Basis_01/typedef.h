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