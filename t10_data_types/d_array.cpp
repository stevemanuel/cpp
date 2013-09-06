// using arrays

#include <iostream>
using namespace std;

int ids[] = {1, 4, 228, 893, 10833};
int n, result = 0;

int main ()
{
  for (n = 0; n < 5; n++) {
    result += ids[n];
  }

  cout << result << endl;

  return 0;
}
