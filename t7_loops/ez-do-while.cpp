// simple do-while loop

#include <iostream>

using namespace std;

int main () 
{
  unsigned long n;

  do {
    cout << "Enter your number (0 to end): ";
    cin >> n;
    cout << "You entered " << n << endl;
  } while (n != 0);

  return 0;
}
