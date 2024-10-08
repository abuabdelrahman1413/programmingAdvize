#include <cstdio>
#include <iomanip>
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

bool isLeapYear(int Year) {
  return Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0;
}

string MonthShortName(short Month)
{
	string Months[12] = {
		"Jan", "Feb", "Mar",
		"Apr", "May", "Jun",
		"Jul", "Aug", "Sep",
		"Oct", "Nov", "Dec"};
	return Months[Month - 1];
}

int NumberOfDaysInAMonth(short Month, short Year) {
  if (Month < 1 || Month > 12) return -1;
  int NumberOfDaysInMonth[12] = {31, 28, 31, 30, 31, 30,
                                 31, 31, 30, 31, 30, 31};
  return (Month == 2) ? (isLeapYear(Year) ? 29 : 28)
                      : NumberOfDaysInMonth[Month - 1];
}

int DayOfWeekOrder(short Day, short Month, short Year)
{
	short a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + 12 * a - 2;
	int d = (Day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;
	return d;
}

void PrintMonthCalendar(short Month, short Year)
{
	int NumberOfDays;
	// Index of the day from 0 to 6
	int current = DayOfWeekOrder(1, Month, Year);
	NumberOfDays = NumberOfDaysInAMonth(Month, Year);

	// Print the current month name
	printf("\n ______________%s_____________\n\n",
	       MonthShortName(Month).c_str());
		   // c_str()  convert std::string to c-style string

	// Print the columns
	printf(" Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

	// print appropriate number of spaces
	int i;
	for (i = 0; i < current; i++)
		printf("     ");

	// print the days of the month
	for (int j = 1; j <= NumberOfDays; j++)
	{
		printf("%4d", j);
		// %4d  print integer with 4 spaces

		if (++i == 7)
		{
			// every 7 days start a new line
			i = 0;
			printf("\n");
		}
	}

		printf("\n _____________________________\n\n");

}

void PrintYearCalendar(short Year)
{
    printf("\n  ------------------------------------------\n\n");
    printf("              Claendar - %d\n", Year);
    printf("  ------------------------------------------\n\n");
    for (int month = 1; month <= 12; month++)
    {
        PrintMonthCalendar(month, Year);
    }
}

int main(void)
{

    PrintYearCalendar(ReadNumber("Enter year: "));

	system("pause>0");
	return (0);
}
