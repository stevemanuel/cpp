// initialization of variables 

#include <iostream>

using namespace std;

int main () {
  
  int a = 5; // initial value of 5 (c-like initialization)
  int b (2); // initial value of 2 (constructor initialization)
  int result; // no initial value, just declaring variable

  a = a + 3;
  result = a - b;

  cout << result;

  return 0;

}
