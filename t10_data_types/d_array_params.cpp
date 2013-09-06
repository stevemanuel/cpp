// using arrays as params

#include <iostream>
using namespace std;

void printArray (int arg[], int len)
{
  for (int i = 0; i < len; i++) {
    cout << arg[i] << " ";
  } 
  cout << endl;
}

int main ()
{
  int array1[] = {2827, 238, 39, 19, 9}; // length of 5
  int array2[] = {2, 9, 990, 273}; // length of 4

  printArray(array1, 5);
  printArray(array2, 4);

  return 0;
}
