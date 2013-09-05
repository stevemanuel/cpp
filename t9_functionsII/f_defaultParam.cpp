// function with default params

#include <iostream>
using namespace std;

float divide (int a, int b = 2)
{
  return (a / b);
}

int main () {
  cout << divide(20, 4) << endl;
  cout << divide(10) << endl;

  return 0;
}
