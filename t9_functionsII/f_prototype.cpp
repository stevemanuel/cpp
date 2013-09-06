// declaring function prototypes 

#include <iostream>
using namespace std;

void even (int a);
void odd (int a);

int main ()
{
  int val;
  while (val != 0) {
    cout << "Enter a number (or 0 for exit): ";
    cin >> val;
    odd(val);
  }

  return 0;
}

void odd (int a) 
{
  if (a % 2 != 0) {
    cout << "Your number is odd." << endl;
  }
  else {
    even(a);
  }
}

void even (int a)
{
  if (a % 2 == 0) {
    cout << "Your number is even." << endl;
  }
  else {
    odd(a);
  }
}
