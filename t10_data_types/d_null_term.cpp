// using null-terminated sequences of chars

#include <iostream>
using namespace std;

int main ()
{
  char word1[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // '\0' is null characteri
  char word2[] = "Hello";
  
  // what is this evaluating?
  cout << ((word1 == word2) ? "TRUE" : "FALSE") << endl;

  // same size?
  cout << ((sizeof(word1) == sizeof(word2)) ? "TRUE" : "FALSE") << endl;

  // show the values
  cout << word1 << endl;
  cout << word2 << endl;
  return 0;
}