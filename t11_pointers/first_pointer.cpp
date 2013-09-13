// starting to use pointers

#include <iostream>
using namespace std;


int main ()
{
  int firstval, secondval;
  int * mypointer;
  
  // set mypointer equal to reference of firstval
  mypointer = &firstval;
  *mypointer = 10; // set dereferenced mypointer to 10

  // reassign mypointer to reference of secondval
  mypointer = &secondval;
  *mypointer = 20; // set dereffed mypointer to 20

  // show results
  cout << "value of firstval  = " << firstval << endl;
  cout << "value of secondval = " << secondval << endl;

  return 0;
}
