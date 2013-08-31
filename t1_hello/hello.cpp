#include <iostream>
#include <string>

using namespace std;

int main () 
{
  string guestName = "default guest"; 
  cout << "Type your name:\n";
  cin >> guestName;
  string greeting = "Hello " + guestName;
  cout << greeting + "!\n";
  return 0;
}
