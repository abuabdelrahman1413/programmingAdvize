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

int main()
{
	short day, month, year;
	day = ReadNumber("Enter day: ");
	month = ReadNumber("Enter month: ");
	year = ReadNumber("Enter year: ");
	cout << "\n\n--------------------------------\n";
	PrintDate(day, month, year);
	cout << "\n\n--------------------------------\n";
	short day_date = ConvertDateToDay(day, month, year);
	cout << "Day order: " << day_date << endl;
	switch (day_date) {
		case 0:
			cout << "Day name: " << "Sunday";
			break;
		case 1:
			cout << "Day name: " << "Monday";
			break;
		case 2:
			cout << "Day name: " << "Tuesday";
			break;
		case 3:
			cout << "Day name: " << "Wednesday";
			break;
		case 4:
			cout << "Day name: " << "Thursday";
			break;
		case 5:
			cout << "Day name: " << "Friday";
			break;
		case 6:
			cout << "Day name: " << "Saturday";
			break;
		default:
			cout << "Invalid day";
	}

	return 0;
}