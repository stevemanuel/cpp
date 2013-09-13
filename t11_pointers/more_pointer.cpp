// more drawn out pointer

#include <iostream>
using namespace std;

int main ()
{
  int firstval = 5, secondval = 15;
  int * p1, * p2;
  
  // show initial values
  cout << "INITIAL\nfirstval: " << firstval << "\nsecondval: " << secondval << endl; // => firstval: 5, secondval 15

  p1 = &firstval; // assign p1 to the memory address of firstval;
  p2 = &secondval; // assign p2 to mem addr of secondval;

  *p1 = 10; // assign dereffed p1 to 10, reassigning firstval to 10
  *p2 = *p1; // assign dereffed p2 to dref p1, reassigning secondval to 10

  // show new values
  cout << "SECONDARY\nfirstval: " << firstval << "\nsecondval: " << secondval << endl; // => firstval: 10, secondval: 10

  p1 = p2; // copying value of p2 to p1
  *p1 = 20; // reassigning dref p1 (now secondval) to 20, reassigning secondval
  
  // show last values
  cout << "FINAL\nfirstval: " << firstval << "\nsecondval: " << secondval << endl; // => firstval: 10, secondval: 20
  
  return 0;
}
