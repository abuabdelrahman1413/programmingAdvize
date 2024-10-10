#include <iostream>
using namespace std;

void printNumbers(int a, int b) {
  if (a >= b) {
    cout << a << endl;
    printNumbers(a - 1, b);
  }
}

int powerTom(int Number, int Power) {
  /* return result; */
  if (Power == 0)
    return 1;
  else
    return (Number * powerTom(Number, Power - 1));
}

int main() { cout << powerTom(2, 3) << endl; }
