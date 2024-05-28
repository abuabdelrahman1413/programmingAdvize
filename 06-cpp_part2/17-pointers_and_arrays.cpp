#include <iostream>
using namespace std;

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = arr;

  cout << ptr << endl;
  cout << ptr + 1 << endl;
  cout << ptr + 2 << endl;
  cout << ptr + 3 << endl;
  cout << ptr + 4 << endl;

  cout << "\nValues of arr: " << endl;
  // cout << *ptr << endl;
  // cout << *(ptr + 1) << endl; // use parenthesis to git addresses of each
  // element in array cout << *(ptr + 2) << endl; cout << *(ptr + 3) << endl;
  // cout << *(ptr + 4) << endl;

  for (int i = 0; i < 5; i++) {
    // cout << *ptr++ << endl;
    // or you can use
    // cout << *(ptr++) << endl;
    // or you can use
    cout << *(ptr + i) << endl;
  }
  return 0;
}
