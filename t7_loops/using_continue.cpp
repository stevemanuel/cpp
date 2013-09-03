// example using continue 

#include <iostream>
using namespace std;

int main () 
{
  for (int n = 10; n > 0; n--) { 
    if (n == 5) continue; // this skips 5 and goes on to 6
    cout << n << ", ";
  }
  
  cout << "FIRE!\n";
  return 0;
}
