// simple i/o example

#include <iostream>
#include <string>

using namespace std;

int main () {
  
  string mystring;
  cout << "What is your name?\n";
  getline (cin, mystring);
  cout << "Hello there, " << mystring << ". What is your favorite team?\n";
  getline (cin, mystring);
  cout << "I like the " << mystring << " too!\n";

  return 0;
}
