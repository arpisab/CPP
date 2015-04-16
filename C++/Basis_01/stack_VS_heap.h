//////////////////////////////////////////////////////////////////////////////
//
// Pointers and dynamic memory - stack vs heap
//
//

#include <iostream>
using namespace std;


/// CASE 5
struct IntHolder
{
	int MyInt1;
	int MyInt2;
	double myDouble;
};

IntHolder holder;

void main()
{

	cout << holder.MyInt1 << endl;
	cout << holder.MyInt2 << endl;
	cout << holder.myDouble << endl;
}



/// CASE 4
////int myInt;
////
////void anotherFunction()
////{
////	myInt = 12345678;
////}
////
////void main()
////{
////	cout << myInt << endl;
////	myInt = 10;
////	cout << myInt << endl;
////	anotherFunction();
////	cout << myInt << endl;
////}



/// CASE 3
//class Person
//{
//public:
//	int age;
//	char gender;
//
//};
//
//void main()
//{
//	//Person p; // Here we put the class Person on the stack
//
//	Person *p = new Person; // Now we put the class Person on the heap
//	
//	(*p).age = 20; // these two ways to access the pointer are exacly the same
//	p->age = 30;   //
//	
//	cout << (*p).age << endl;
//	cout << p->age << endl;
//	
//	delete p;  // If we don't delete p now and we go on with a new line as below we will cause memory leak
//
//	p = new Person;
//}


/// CASE 2
//void main()
//{
//	//	int a; // goes on the stack
//		
//	int* i = new int(5); // goes to the heap. new returns an address and stores it to the pointer *i
//	cout << *i << endl;
//	
//	*i = 8;
//	cout << *i << endl;
//	delete i; 
//
//	cout << *i << endl; // this line is undefined behavior
//}


/// CASE 1
//void main()
//{
//	int a; // goes on the stack
//	
//	int *p; // goes to the heap 
//	
//	p = new int;
//	*p = 10;
//	cout<< *p << "\n\n";
//	delete p;
//	
//	p = new int[10];
//	cout<< *p << "\n\n"
//		<< &p;
//	delete[]p;
//
//}

