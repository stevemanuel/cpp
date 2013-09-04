// another example of a function, doing subtraction

#include <iostream>
using namespace std;

int subtraction (int a, int b)
{
  int r = a - b;
  return (r);
}

int main ()
{
  int x = 5, y = 3, z;
  z = subtraction(7, 2);
  cout << "The first result is: " << z << endl;
  cout << "The second result is: " << subtraction(7, 2) << endl;
  cout << "The third result is: " << subtraction(x, y) << endl;
  z = 4 + subtraction(x, y);
  cout << "The fourth result is: " << z << endl;

  return 0;
}

