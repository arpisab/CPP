#include <iostream>
using namespace std;


/*
Template Class
myTemp interprets any data type coming from main



*/

template <class myTemp> myTemp addSome(myTemp a, myTemp b)
{
  return a + b;
}

int main()
{
  double x = 7.65, y = 42.35, z;
  z = addSome(x, y);
  cout << z << endl;
}
