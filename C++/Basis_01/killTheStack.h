/////////////////////////////////////////////////////////////////////////////////////////
//
// The stuck is a mega byte o memory. Belove we over load the stack to make it crash!
//
// 


#include <iostream>

using namespace std;


int main() {


	int killTheStack[1000000];


	cout << killTheStack;

	system("PAUSE");

	return 0;
}