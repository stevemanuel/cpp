// using recursivity in a function

#include <iostream>
using namespace std;

double long factorial(double long n)
{
  if (n > 1) {
    return (n * factorial(n - 1));
  }
  else {
    return 1;
  }
}

int main ()
{
  double long num; 
  cout << "Enter a number: ";
  cin >> num;
  cout << num << "! = " << factorial(num) << endl;

  return 0;
}
