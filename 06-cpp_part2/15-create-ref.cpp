#include <iostream>
using namespace std;

// create reference

int main() {
  int a = 10;
  int &ref = a;
  cout << &ref << endl;
  cout << &a << endl;

  a = 13;
  cout << a << endl;
  cout << ref << endl; // ref is changed like a
  return 0;
}
