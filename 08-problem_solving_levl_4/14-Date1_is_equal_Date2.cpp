#include <iostream>
#include <string>

using namespace std;

struct sDate
{
    short Year;
    short Month;
    short Day;
};

short ReadNumber(string str = "")
{
    int Number;
    cout << str;
    cin >> Number;

    return Number;
}

sDate ReadDate()
{
    sDate Date;
    
    Date.Year = ReadNumber("Enter a year: ");
    Date.Month = ReadNumber("Enter a month: ");
    Date.Day = ReadNumber("Enter a day: ");

    return Date;
}

bool isLeap(short Year)
{
    return Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0;
}

short NumberOfDaysInMonth(short Year, short Month)
{
    if (Month < 1 || Year > 12) return -1;

    short NumberOfDaysInMonth[12] = {
        31, 28, 31, 30,
        31, 30, 31, 31,
        30, 31, 30, 31
    };

    return (Month == 2) ? (isLeap(Year) ? 29 : 28) : NumberOfDaysInMonth[Month - 1];
}


short ConvertDateToDay(short day, short month, short year)
{
	int a = (14 - month) / 12;
	int y = year - a;
	int m = month + 12 * a - 2;

	int d = (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;
	return d;
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

bool IsDate1EqualDate2(sDate Date1, sDate Date2)
{
    return Date1.Year == Date2.Year ? ((Date1.Month == Date2.Month ? (Date1.Day == Date2.Day ? true : false) : false)) : false;
}

int main()
{
    sDate Date1, Date2;
    Date1 = ReadDate();
    cout << "\n\n------------------------------------------------\n";
    Date2 = ReadDate();


    if (IsDate1EqualDate2(Date1,Date2))
    {
        cout << "\n\nYes, Date1 is Equal Date2\n";
    }
    else
    {
        cout << "\n\nNo, Date1 is not Equal Date2\n";

    }
}