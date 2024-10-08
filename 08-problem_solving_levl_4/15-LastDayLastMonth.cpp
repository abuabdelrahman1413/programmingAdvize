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

int NumberOfDaysInMonth(int Year, int Month) {
  if (Month < 1 || Month > 12) return -1;
  int NumberOfDaysInMonth[12] = {31, 28, 31, 30, 31, 30,
                                 31, 31, 30, 31, 30, 31};
  return (Month == 2) ? (isLeap(Year) ? 29 : 28)
                      : NumberOfDaysInMonth[Month - 1];
}

bool isLastDayInMonth(short Day, short Month, short Year)
{
    short DaysInMonth = NumberOfDaysInMonth(Year, Month);
    return Day == DaysInMonth;
}

bool isLastMonth(short Month)
{
    return Month == 12;
}

int main()
{
    sDate Date;
    Date = ReadDate();
    if (isLastMonth(Date.Month))
    {
        cout  << "\nYes, it is the last month of the year\n";
    }
    else
    {
        cout << "\nNo, it is not the last month of the year\n";
    }

    if (isLastDayInMonth(Date.Day, Date.Month, Date.Year))
    {
        cout << "Yes, it is the last day of the month\n";
    }
    else
    {
        cout << "No, it is not the last day of the month\n";
    }
    system("pause>0");
    return 0;
}