#include <iostream>
#include <string>
using namespace std;

struct sDate {
  short Year;
  short Month;
  short Day;
};

struct sPeriod {
  sDate Start;
  sDate End;
};

short ReadNumber(string message) {
  short number;
  cout << message;
  cin >> number;
  return number;
}

sDate ReadDate() {
  sDate Date;
  Date.Day = ReadNumber("Enter day: ");
  Date.Month = ReadNumber("Enter month: ");
  Date.Year = ReadNumber("Enter year: ");

  return Date;
}

sPeriod ReadPeriod() {
  sPeriod Period;
  cout << "Enter start date: " << endl;
  Period.Start = ReadDate();
  cout << "Enter end date: " << endl;
  Period.End = ReadDate();
  return Period;
}

short ConvertDateToDay(short day, short month, short year) {
  int a = (14 - month) / 12;
  int y = year - a;
  int m = month + 12 * a - 2;

  int d = (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;
  return d;
}

void PrintDate(short day, short month, short year) {
  cout << day << "/" << month << "/" << year << endl;
}

bool isLeapYear(int Year) {
  return Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0;
}

int NumberOfDaysInMonth(int Year, int Month) {
  if (Month < 1 || Month > 12)
    return -1;
  int NumberOfDaysInMonth[12] = {31, 28, 31, 30, 31, 30,
                                 31, 31, 30, 31, 30, 31};
  return (Month == 2) ? (isLeapYear(Year) ? 29 : 28)
                      : NumberOfDaysInMonth[Month - 1];
}

bool isLastDayInMonth(short Day, short Month, short Year) {
  short DaysInMonth = NumberOfDaysInMonth(Year, Month);
  return Day == DaysInMonth;
}

bool isLastMonth(short Month) { return Month == 12; }

sDate IncreaseDateByOneDay(sDate Date) {
  sDate NextDate;
  NextDate = Date;
  if (isLastDayInMonth(Date.Day, Date.Month, Date.Year)) {
    if (isLastMonth(Date.Month)) {
      NextDate.Day = 1;
      NextDate.Month = 1;
      NextDate.Year++;
    } else {
      NextDate.Day = 1;
      NextDate.Month++;
    }
  } else {
    NextDate.Day++;
  }

  return NextDate;
}

// bool IsDate1LessThanDate2(sDate Date1, sDate Date2)
// {
//     return (Date1.Year < Date2.Year ? true : ((Date1.Year == Date2.Year ?
//     (Date1.Month < Date2.Month ? true: (Date1.Month == Date2.Month ?
//     Date1.Day < Date2.Day : false)) : false)));
// }

bool IsDate1LessThanDate2(sDate Date1, sDate Date2) {
  return (Date1.Year < Date2.Year)
             ? true
             : ((Date1.Year == Date2.Year)
                    ? (Date1.Month < Date2.Month
                           ? true
                           : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day
                                                         : false))
                    : false);
}

void SwapDates(sDate &Date1, sDate &Date2) {
  sDate TempDate = Date1;
  Date1 = Date2;
  Date2 = TempDate;
}

short DifferenceInDays(sDate Date1, sDate Date2, bool IncludeEndDay = false) {
  short DiffereceInDays = 0;
  short SwapFlagValue = 1;
  if (!IsDate1LessThanDate2(Date1, Date2)) {
    SwapFlagValue = -1;
    SwapDates(Date1, Date2);
  }

  while (IsDate1LessThanDate2(Date1, Date2)) {
    DiffereceInDays++;
    Date1 = IncreaseDateByOneDay(Date1);
  }

  return IncludeEndDay ? ++DiffereceInDays * SwapFlagValue : DiffereceInDays;
}

short PeriodLengthInDays(sPeriod Period, bool IncludeEndDay = false) {
  return DifferenceInDays(Period.Start, Period.End, IncludeEndDay);
}

int main() {
  cout << "Plaese enter period:\n";
  sPeriod Period = ReadPeriod();

  cout << "Period length in days: " << PeriodLengthInDays(Period) << endl;

  cout << "Period length in days including End day: " << PeriodLengthInDays(Period, true) << endl;
  return 0;
}
