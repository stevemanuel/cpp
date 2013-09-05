// write a function that returns the number previous and next of it

#include <iostream>
using namespace std;

void getPrevNext (int a, int& prev, int& next)
{
  prev = a-1;
  next = a+1;
}

int main ()

{
  int x = 100, y, z;
  getPrevNext(x, y, z);
  cout << "Current: 100" << endl;
  cout << "Previous: " << y << endl;
  cout << "Next: " << z << endl;
  return 0;
}
