// function with parameters by reference

#include <iostream>

using namespace std;

void duplicate(int& a, int& b)
{
  a *= 2;
  b *= 2;
}

int main()
{
  int x = 3, y = 7;
  cout << "INITIAL\nx: " << x << ", y: " << y << endl;
  duplicate(x, y);
  cout << "DUPLICATED\nx: " << x << ", y: " << y << endl;

  return 0;
}
