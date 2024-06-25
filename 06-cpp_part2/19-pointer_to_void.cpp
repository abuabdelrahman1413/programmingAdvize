#include <iostream>
using namespace std;

int main() {
  // int *ptr ;
  void *ptr;
  float f1 = 10.5;
  ptr = &f1; // error ptr is int and f is float to solve this problem must void
             // ptr
  cout << ptr << endl;
  // Cast ptr (of unknown type) to a float pointer to interpret the data as a
  // float
  // Warning: Casting can be risky if ptr doesn't actually point to a float
  //          This could lead to unexpected results or program crashes.
  cout << *(static_cast<float *>(ptr)) << endl;
  return 0;
}
