#include <iostream>
using namespace std;

short ReadYear() {
  int year;
  cout << "Enter a year: ";
  cin >> year;
  return year;
}

bool isLeapYear(int Year) {
  return Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0;
}

short NumberOfDaysInYear(int Year) { return isLeapYear(Year) ? 366 : 365; }

int NumberOfHoursInYear(int Year) { return NumberOfDaysInYear(Year) * 24; }

int NumberOfMinutesInYear(int Year) { return NumberOfHoursInYear(Year) * 60; }

int NumberOfSecondsInYear(int Year) { return NumberOfMinutesInYear(Year) * 60; }

int main() {
  short Year = ReadYear();
  cout << "\nNumber of Days        in Year [" << Year << "] is "
       << NumberOfDaysInYear(Year) << endl;
  cout << "Number of Hours       in Year [" << Year << "] is "
       << NumberOfHoursInYear(Year) << endl;
  cout << "Number of Minutes     in Year [" << Year << "] is "
       << NumberOfMinutesInYear(Year) << endl;
  cout << "Number of Seconds     in Year [" << Year << "] is "
       << NumberOfSecondsInYear(Year) << endl;

  return 0;
}