#include <iostream>
#include <string>
using namespace std;

short ReadNumber(string message)
{
	short number;
	cout << message;
	cin >> number;
	return number;
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

int main()
{
	short day, month, year;
	day = ReadNumber("Enter day: ");
	month = ReadNumber("Enter month: ");
	year = ReadNumber("Enter year: ");
	cout << "\n\n--------------------------------\n";
	PrintDate(day, month, year);
	cout << "\n\n--------------------------------\n";

    short day_order = DayOrderInYear(day, month, year);
    cout << "Number of days from the beginning of the year: " << day_order << endl;

    system("pause>0");
	return 0;
}