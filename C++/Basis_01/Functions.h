#include <iostream>
#include <vector>
#include <string>
using namespace std;


////Pointer Function
void myFun()
{
  cout << "My Pointer Function\n";
}


int main() {

  myFun();

  ////Pointer Function
  void(*pointerFunc)() = myFun;

  return 0;
}

//// Inline Function example
class test
{
public:
  void square(int x)
  {
    cout << "\nThe square of the given number is: " << x*x << "\n";
  }

  inline int cube(int x)
  {
    cout << "The cube of the given number is: ";
    return (x*x*x);
  }
};

int main()
{
  test obj;
  int a;

  cout << "Enter the Number: ";
  cin >> a;

  obj.square(a);
  cout << obj.cube(a) << "\n\n";
}