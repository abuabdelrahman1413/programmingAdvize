#include <iostream>
#include <string>
using namespace std;

struct sDate
{
    short Year;
    short Month;
    short Day;
};


short ReadNumber(string message)
{
	short number;
	cout << message;
	cin >> number;
	return number;
}

sDate ReadDate()
{
    sDate Date;
    Date.Day = ReadNumber("Enter day: ");
    Date.Month = ReadNumber("Enter month: ");
    Date.Year = ReadNumber("Enter year: ");

    return Date;
}

short ConvertDateToDay(short day, short month, short year)
{
	int a = (14 - month) / 12;
	int y = year - a;
	int m = month + 12 * a - 2;

	int d = (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;
	return d;
}

void PrintDate(short day, short month, short year)
{
	cout << day << "/" << month << "/" << year << endl;
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

short DayOrderInYear(short day, short month, short year)
{
    short total_days = 0;
    for (int i = 1; i <= month - 1; i++)
    {
        total_days += NumberOfDaysInMonth(year, i);
    }

    total_days += day;
    return total_days;
}

short DifferenceInDays(sDate Date1, sDate Date2, bool IncludeEndDay = false)
{
    short DiffereceInDays = DayOrderInYear(Date2.Day, Date2.Month, Date2.Year) - DayOrderInYear(Date1.Day, Date1.Month, Date1.Year);
    if (IncludeEndDay)
        DiffereceInDays++;
    return DiffereceInDays;
}

int main()
{
    sDate Date1, Date2;
    cout << "Date 1 should be less than Date 2\n";
    Date1 = ReadDate();
    cout << "\n\n------------------------------------------------\n";
    Date2 = ReadDate();

    cout << "\n\nDifference in days: " << DifferenceInDays(Date1, Date2) << endl;
    cout << "\n\nDifference in days including End day: " << DifferenceInDays(Date1, Date2, true) << endl;
    system("pause>0");
    return 0;
}