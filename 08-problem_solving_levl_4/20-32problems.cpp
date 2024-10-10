#include <iostream>
#include <string>

using namespace std;

struct sDate {
  long Year;
  long Month;
  long Day;
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

sDate IncreaseDateByNumberOfDays(sDate Date, int Days) {
  sDate NextDate;
  NextDate = Date;
  for (int i = 0; i < Days; i++) {
    NextDate = IncreaseDateByOneDay(NextDate);
  }
  return NextDate;
}


sDate IncreaseDateByOneWeek(sDate Date) {
  sDate NextDate;
  NextDate = Date;
  for (int i = 0; i < 7; i++) {
    NextDate = IncreaseDateByOneDay(NextDate);
  }
  return NextDate;
}

sDate IncreaseDateByNumberOfWeeks(sDate Date, int Weeks) {
  sDate NextDate;
  NextDate = Date;
  for (int i = 0; i < Weeks; i++) {
    NextDate = IncreaseDateByOneWeek(NextDate);
  }
  return NextDate;
}


// أصعب دالة
sDate IncreaseDateByOneMonth(sDate Date) {
  if (Date.Month = 12)
  {
    Date.Month = 1;
    Date.Year++;
  }
  else
  {
    Date.Month++;
  }

  short NumberOfDaysInCurrentMonth = NumberOfDaysInMonth(Date.Year, Date.Month);
  if (Date.Day > NumberOfDaysInCurrentMonth)
  {
    Date.Day = NumberOfDaysInCurrentMonth;
  }  
  else
  {
    Date.Day = Date.Day;
  }

  return Date;
}

sDate IncreaseDateByNumberOfMonths(sDate Date, int Months) {
  sDate NextDate;
  NextDate = Date;
  for (int i = 0; i < Months; i++) {
    NextDate = IncreaseDateByOneMonth(NextDate);
  }
  return NextDate;
}

sDate IncreaseDateByOneYear(sDate Date) {
  Date.Year++;
  return Date;
}

sDate IncreaseDateByNumberOfYears(sDate Date, int Years) {
  sDate NextDate;
  NextDate = Date;
  for(int i = 0; i < Years; i++)
  {
    NextDate = IncreaseDateByOneYear(NextDate);
  }
  return NextDate;
}

sDate IncreaseDateByNumberOfYearsFaster(sDate Date, int Years) {
  Date.Year += Years;
  return Date;
}

sDate IncreaseDateByOneDecade(sDate Date) {
  Date.Year += 10;
  return Date;
}

sDate IncreaseDateByNumberOfDecades(sDate Date, int Decades) {
  Date.Year += 10 * Decades;
  return Date;
}

sDate IncreaseDateByOneCentury(sDate Date) {
  Date.Year += 100;
}

sDate IncreaseDateByNumberOfCenturies(sDate Date, int Centuries) {
  Date.Year += 100 * Centuries;
  return Date;
}


int main() {
  sDate Date;
  Date = ReadDate();

  // After One Day
  Date = IncreaseDateByOneDay(Date);
  cout << "After one day: " << Date.Year << "/" << Date.Month << "/" << Date.Day << endl;

  // After 10 Days
  Date= IncreaseDateByNumberOfDays(Date, 10);
  cout << "After 10 days: " << Date.Year << "/" << Date.Month << "/" << Date.Day << endl;

  // After One Week
  Date = IncreaseDateByOneWeek(Date);
  cout << "After one week: " << Date.Year << "/" << Date.Month << "/" << Date.Day << endl;

  // After 10 Weeks
  Date = IncreaseDateByNumberOfWeeks(Date, 10);
  cout << "After 10 weeks: " << Date.Year << "/" << Date.Month << "/" << Date.Day << endl;
  return 0;
}
