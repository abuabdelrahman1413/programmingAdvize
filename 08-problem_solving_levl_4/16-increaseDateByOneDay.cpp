#include <iostream>
#include <string>

using namespace std;

struct sDate {
  short Year;
  short Month;
  short Day;
};

short ReadNumber(string str = "") {
  int Number;
  cout << str;
  cin >> Number;

  return Number;
}

sDate ReadDate() {
  sDate Date;

  Date.Year = ReadNumber("Enter a year: ");
  Date.Month = ReadNumber("Enter a month: ");
  Date.Day = ReadNumber("Enter a day: ");

  return Date;
}

bool isLeap(short Year) {
  return Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0;
}

int NumberOfDaysInMonth(int Year, int Month) {
  if (Month < 1 || Month > 12)
    return -1;
  int NumberOfDaysInMonth[12] = {31, 28, 31, 30, 31, 30,
                                 31, 31, 30, 31, 30, 31};
  return (Month == 2) ? (isLeap(Year) ? 29 : 28)
                      : NumberOfDaysInMonth[Month - 1];
}

bool isLastDayInMonth(short Day, short Month, short Year) {
  short DaysInMonth = NumberOfDaysInMonth(Year, Month);
  return Day == DaysInMonth;
}

bool isLastMonth(short Month) { return Month == 12; }

sDate IncreaseDateByOneDay(sDate Date) {
  if (isLastDayInMonth(Date.Day, Date.Month, Date.Year)) {
    if (isLastMonth) {
      Date.Day = 1;
      Date.Month = 1;
      Date.Year++;
    } else {
      Date.Day = 1;
      Date.Month++;
    }
  } else {
    Date.Day++;
  }

  return Date;
}

int main() {
  sDate Date;
  Date = ReadDate();

  sDate NextDate;
  NextDate = IncreaseDateByOneDay(Date);
  // print current date
  cout << "Current date: " << Date.Day << "/" << Date.Month << "/" << Date.Year
       << endl;
  // print hirozintal line
  cout << "--------------------------------" << endl;
  // print next date
  cout << "Next date: " << NextDate.Day << "/" << NextDate.Month << "/"
       << NextDate.Year << endl;
  system("pause>0");
  return 0;
}
