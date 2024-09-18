#include <iostream>
#include <string>
#include <vector>

using namespace std;

int ReadYear() {
  int year;
  cout << "Enter a year: ";
  cin >> year;
  return year;
}

bool isLeapYear(int Year) {
  if (Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int Year = ReadYear();
  if (isLeapYear(Year)) {
    cout << "Leap year" << endl;
  } else {
    cout << "Not a leap year" << endl;
  }

  return 0;
}
