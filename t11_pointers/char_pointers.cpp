// playing around with char pointers

#include <iostream>
using namespace std;

int main ()
{
  char a = 'a';
  char* _a = &a;
  char b = ++(*_a); // (*_a)++ doesn't give the same result.

  cout << a << " should be 'a', b should be b: " << b << endl;
  return 0;
}
