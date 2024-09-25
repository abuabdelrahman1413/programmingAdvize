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

void PrintMonthCalendar(short Month, short Year)
{
	int NumberOfDays;
	// Index of the day from 0 to 6
	int current = DayOfWeekOrder(1, Month, Year);
	NumberOfDays = NumberOfDaysInAMonth(Month, Year);

	// Print the current month name
	printf("\n ______________%s_____________\n\n",
	       MonthShortName(Month).c_str());

	// Print the columns
}

int main(void)
{
	short Year = ReadNumber("Enter year: ");
	short Month = ReadNumber("Enter month: ");

	PrintMonthCalendar(Month, Year);
	return (0);
}
