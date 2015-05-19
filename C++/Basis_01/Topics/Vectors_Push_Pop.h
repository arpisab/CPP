#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
using namespace std;

//Format: vector<Datatype> nameofVector
//myVector.push_back(value) ==> adds an element to the END of the vector (also resize it)
//myVector.at(index) ==> return element at specified index number
//myVector.size() ==> return an unsigned int equal to the number of elements
//myVector.begin() ==> reads element from first element (index)
//myVector.insert(myVector.begin) + integer, new value) ==> adds element BEFORE specified index number 
//myVector.erase(myVector.begin() + integer) ==> removes elements AT specified index number
//myVector.clear() ==> removes all elements in the vector
//myVector.empy() ==> returns boolean if whether vector is empty


int main() {
  /* vector<string> myTest;

  string myName = "Sabino";
  myTest.push_back("myName");
  cout << "This is my name " << myName << endl;
  myTest.pop_back();


  myName = "D'Argenio";
  cout << "This is my name " << myName << endl;
  myName.pop_back();


  myTest.push_back("myName");
  myName = "Nickname";
  cout << "This is my new name " << myName << endl;
  myTest.pop_back();*/

  //---------------------------------------------------------

  vector<int> myVector;

  myVector.push_back(3);
  myVector.push_back(7);
  myVector.push_back(4);
  myVector.push_back(12);
  myVector.push_back(9);

  cout << "Vector: ";

  for (unsigned int i = 0; i < myVector.size(); i++){      //Size
    cout << myVector[i] << " ";
  }

  myVector.insert(myVector.begin() + 4, 5);                //Insert, begin

  cout << endl << "Vector: ";

  for (unsigned int i = 0; i < myVector.size(); i++){
    cout << myVector[i] << " ";
  }

  myVector.erase(myVector.begin() + 0);                     //erase, begin

  cout << endl << "Vector: ";

  for (unsigned int i = 0; i < myVector.size(); i++){
    cout << myVector[i] << " ";
  }

  if (myVector.empty()){                                   //Empty
    cout << endl << "Is Empty!";
  }
  else {
    cout << endl << "Is Not Empty!";
  }

  myVector.clear();                                        //Clear

  if (myVector.empty()){                                   //Empty
    cout << endl << "Is Empty!";
  }
  else {
    cout << endl << "Is Not Empty!";
  }



  cout << endl;

  return 0;

}