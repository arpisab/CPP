#include <iostream>
#include <stdio.h>
using namespace std;


union uValues
{
  int ivalue;
  char dvalue;
};

#pragma pack(push,1)
class dStruct
{
public:
  int ivalueS;
  double dvalueS;

  void myFunc(){
    cout << "int is: ";
  }
};
#pragma pack(pop)

int main() {

  uValues v;

  dStruct s;

  cout << "int is: " << sizeof(v.ivalue);
  cout << "\ndouble is: " << sizeof(v.dvalue);
  cout << "\nthe union is: " << sizeof(v) << "\n";

  cout << "int S is: " << sizeof(s.ivalueS);
  cout << "\ndouble S is: " << sizeof(s.dvalueS);
  cout << "\nthe struct is: " << sizeof(s) << "\n";

  system("PAUSE");

  return 0;
}