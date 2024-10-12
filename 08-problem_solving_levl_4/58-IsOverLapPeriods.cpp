#include <ctime>
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

short DayOfWeekOrder(short day, short month, short year) {
  int a = (14 - month) / 12;
  int y = year - a;
  int m = month + 12 * a - 2;

  int d = (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;
  return d;
}

short DayOfWeekOrder(sDate Date) {
  return DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
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

bool isLastDayInMonth(sDate Date) {
  short DaysInMonth = NumberOfDaysInMonth(Date.Year, Date.Month);
  return Date.Day == DaysInMonth;
}

bool isLastMonth(short Month) { return Month == 12; }
sDate IncreaseDateByOneDay(sDate Date) {
  if (isLastDayInMonth(Date)) {
    if (isLastMonth(Date.Month)) {
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

int DifferenceInDays(sDate Date1, sDate Date2, bool IncludeEndDay = false) {
  int DiffereceInDays = 0;
  while (IsDate1LessThanDate2(Date1, Date2)) {
    DiffereceInDays++;
    Date1 = IncreaseDateByOneDay(Date1);
  }

  return IncludeEndDay ? ++DiffereceInDays : DiffereceInDays;
}

sDate GetDateFromSystem() {
  sDate Date;
  time_t t = time(0);
  tm *now = localtime(&t);

  Date.Year = now->tm_year + 1900;
  Date.Month = now->tm_mon + 1;
  Date.Day = now->tm_mday;

  return Date;
}

string GetDayInWeek(short DatOrderInWeek) {
  string str = "";
  switch (DatOrderInWeek) {
  case 0:
    str = "Sunday";
    break;
  case 1:
    str = "Monday";
    break;
  case 2:
    str = "Tuesday";
    break;
  case 3:
    str = "Wednesday";
    break;
  case 4:
    str = "Thursday";
    break;
  case 5:
    str = "Friday";
    break;
  case 6:
    str = "Saturday";
    break;
  default:
    str = "Error";
  }

  return str;
}

bool isEndOfTheWeek(sDate Date) { 
    short Day = DayOfWeekOrder(Date);
    return Day == 6;
}
bool isWeekEnd(sDate Date) { 
    short Day = DayOfWeekOrder(Date);
    return (Day == 5 || Day == 6);
}
bool isBussinessDay(sDate Date) { 
    return !isWeekEnd(Date); 
}

short DaysUntilEndOfWeek(sDate Date) { return 6 - DayOfWeekOrder(Date); }

short DaysUntilEndOfMonth(sDate Date) {
  sDate EndOfMonthDate;
  EndOfMonthDate.Day = NumberOfDaysInMonth(Date.Year, Date.Month);
  EndOfMonthDate.Month = Date.Month;
  EndOfMonthDate.Year = Date.Year;

  return DifferenceInDays(Date, EndOfMonthDate, true);
}

short DaysUntilEndOfYear(sDate Date) {
  sDate EndOfYearDate;
  EndOfYearDate.Day = 31;
  EndOfYearDate.Month = 12;
  EndOfYearDate.Year = Date.Year;

  return DifferenceInDays(Date, EndOfYearDate);
}

short NumberOfActualVacationDays(sDate Date1, sDate Date2) {
  short Dayscount = 0;
  while(IsDate1LessThanDate2(Date1, Date2)) {
    if (isBussinessDay(Date1))
      Dayscount++;
    Date1 = IncreaseDateByOneDay(Date1);
  }

  return Dayscount;
}

sDate CalculateReturnDate(sDate Date, short Days) {
    short WeekEndCounter = 0;

    // in case the start date is weekend keep adding one day until it is not
    // we get rid all weekend days before the first bussiness day
    while (isWeekEnd(Date))
        Date = IncreaseDateByOneDay(Date);

    // ignore weekend days during vacation without starting date
    for (short i = 0; i < Days + WeekEndCounter; i++) {
        if (isWeekEnd(Date))
            WeekEndCounter++;
        Date = IncreaseDateByOneDay(Date);
    }

    // in case the return date is weekend keep adding one day until it is not 
    while (isWeekEnd(Date))
        Date = IncreaseDateByOneDay(Date);

    return Date;
    
}

sDate IncreaseDateByNumberOfDays(sDate Date, int Days) {
  sDate NextDate;
  NextDate = Date;
  for (int i = 0; i < Days; i++) {
    NextDate = IncreaseDateByOneDay(NextDate);
  }
  return NextDate;
}


bool IsDate1EqualDate2(sDate Date1, sDate Date2)
{
    return Date1.Year == Date2.Year ? ((Date1.Month == Date2.Month ? (Date1.Day == Date2.Day ? true : false) : false)) : false;
}

bool IsDate1AfterDate2(sDate Date1, sDate Date2) {
    return !(IsDate1LessThanDate2(Date1, Date2)) && !(IsDate1EqualDate2(Date1, Date2));
}

enum enDateCompare { Before = -1, Equal = 0, After = 1 };
enDateCompare CompareDate(sDate Date1, sDate Date2)
{
    if (IsDate1LessThanDate2(Date1, Date2)) return enDateCompare::Before;
    if (IsDate1EqualDate2(Date1, Date2)) return enDateCompare::Equal;

    // i can use if isAfterDate(Date1, Date2) but it slow down because of recursion
    // this is fast solution
    return enDateCompare::After;
}

bool IsOverLapPeriods(sPeriod Period1, sPeriod Period2) {
  if (
    CompareDate(Period2.Start, Period1.End) == enDateCompare::After ||
    CompareDate(Period1.End, Period2.Start) == enDateCompare::Before
  )
    return false;
  return true;
}


int main(void) {

    cout << "\nEnter Period 1:";
    sPeriod Period1 = ReadPeriod();

    cout << "\nEnter Period 2:";
    sPeriod Period2 = ReadPeriod();

    if(IsOverLapPeriods(Period1, Period2))
        cout << "OverLap Periods" << endl;
    else
        cout << "Not OverLap Periods" << endl;
    
  return 0;
}
