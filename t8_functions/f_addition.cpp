// create a simple addition function

#include <iostream>
using namespace std;

int addition (int a, int b)
{
  int r = a + b;
  return r;
}

int main () {
  int z = addition(5, 3);
  cout << "The result is: " << z << endl;

  return 0;
}

