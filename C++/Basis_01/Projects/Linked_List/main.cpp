#include <cstdlib>
#include <iostream>
#include "list.h"
using namespace std;



int main(int argc, char** argv)
{
	List Sabino;

	Sabino.AddNode(3);
	Sabino.AddNode(5);
	Sabino.AddNode(7);
	Sabino.PrintList();
	return 0;
}