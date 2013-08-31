// using stringstreams

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main () {
  string mystring;
  float price = 0;
  int quantity = 0;

  cout << "Enter the price: ";
  getline(cin, mystring);
  stringstream(mystring) >> price;

  cout << "Enter the quantity: ";
  getline(cin, mystring);
  stringstream(mystring) >> quantity;

  cout << "Total price: " << price*quantity << endl;

  return 0;
}
