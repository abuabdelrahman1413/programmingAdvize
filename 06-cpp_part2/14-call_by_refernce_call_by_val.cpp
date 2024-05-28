#include <iostream>
using namespace std;

// call by value
void fun1(int x) { x++; }

// call by reference
void fun2(int &x) { x++; }

int main() {
  int a = 10;
  fun1(a);
  cout << a << endl;
  fun2(a);
  cout << a << endl;
  return 0;
}
