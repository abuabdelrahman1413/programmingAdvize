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

bool isFebruary(int Month) { return Month == 2; }

short NumberOfDaysInMonth(int Year, int Month) {
  return isLeapYear(Year) && isFebruary(Month) ? 29 : 28;
}

int NumberOfHoursInMonth(int Year, int Month) {
  return NumberOfDaysInMonth(Year, Month) * 24;
}

int NumberOfMinutesInMonth(int Year, int Month) {
  return NumberOfHoursInMonth(Year, Month) * 60;
}

int NumberOfSecondsInMonth(int Year, int Month) {
  return NumberOfMinutesInMonth(Year, Month) * 60;
}

int main() {
  short Year = ReadYear();

  short Month = ReadMonth();
  cout << "\nNumber of Days        in Month [" << Month << "] is "
       << NumberOfDaysInMonth(Year, Month) << endl;
  cout << "Number of Hours       in Month [" << Month << "] is "
       << NumberOfHoursInMonth(Year, Month) << endl;
  cout << "Number of Minutes     in Month [" << Month << "] is "
       << NumberOfMinutesInMonth(Year, Month) << endl;
  cout << "Number of Seconds     in Month [" << Month << "] is "
       << NumberOfSecondsInMonth(Year, Month) << endl;

  return 0;
}