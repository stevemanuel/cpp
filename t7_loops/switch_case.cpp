// using switch - case

#include <iostream>
using namespace std;

int main () 
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  switch(n % 2) {
    case 0:
      cout << "Your number was even." << endl;
      break;
    default: 
      cout << "Your number was odd." << endl;
      break;
  }

  return 0;
}
