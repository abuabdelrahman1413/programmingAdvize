#include <iostream>
#include <vector>
using namespace std;

/*
 * vectors functions
 *
 * */

int main() {
  vector<int> vNumbers;
  vNumbers.push_back(10);
  vNumbers.push_back(20);
  vNumbers.push_back(30);
  vNumbers.push_back(40);
  vNumbers.push_back(50);

  // first and last element
  cout << "First number in the vector is: " << vNumbers.front() << endl;
  cout << "Last number in the vector is: " << vNumbers.back() << endl;

  // size of vector
  cout << "Number of elements in the vector: " << vNumbers.size() << endl;

  // is empty
  cout << "Is vector empty? " << vNumbers.empty() << endl;

  // vector capacity is size of vector
  cout << "Vector capacity: " << vNumbers.capacity() << endl;

  // The capacity of vector refers to the max elements without resizing
  vNumbers.reserve(100);
  cout << "Vector capacity: " << vNumbers.capacity() << endl;

  return 0;
}
