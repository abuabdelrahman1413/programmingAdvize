#include <iostream>
using namespace std;

short ReadYear() {
  int year;
  cout << "Enter a year: ";
  cin >> year;
  return year;
}

short ReadMonth() {
  int month;
  cout << "Enter a month: ";
  cin >> month;
  return month;
}

bool isLeapYear(int Year) {
  return Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0;
}

int NumberOfDaysInMonth(int Year, int Month) {
  if (Month < 1 || Month > 12) return -1;
  int NumberOfDaysInMonth[12] = {31, 28, 31, 30, 31, 30,
                                 31, 31, 30, 31, 30, 31};
  return (Month == 2) ? (isLeapYear(Year) ? 29 : 28)
                      : NumberOfDaysInMonth[Month - 1];
}

int main() {
  int Year = ReadYear();
  int Month = ReadMonth();
  int Days = NumberOfDaysInMonth(Year, Month);
  if (Days == -1) {
    cout << "Invalid month" << endl;
  } else {
    cout << "Number of days in month " << Month << " in year " << Year << " is "
         << Days << endl;
  }
  return 0;
}