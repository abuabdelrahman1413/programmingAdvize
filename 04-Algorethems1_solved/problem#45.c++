#include <iostream>
#include <string>
using namespace std;
// Day of week
enum enMonthOfYear {
    jan = 1,
    feb = 2,
    mar = 3,
    apr = 4,
    may = 5,
    jun = 6,
    jul = 7,
    aug = 8,
    sep = 9,
    oct = 10,
    nov = 11,
    dec = 12
};
int ReadNumberInRange(string Message, int From, int To)
{

    int Number = 0;

    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number < From || Number > To);

    return Number;
}

enMonthOfYear ReadMonthOfYear()
{
    return (enMonthOfYear)ReadNumberInRange("Please enter a day number 1-12? ", 1, 12);
}

string GetMonthOfYear(enMonthOfYear Month)
{
    switch (Month) {
    case enMonthOfYear::jan:
        return "January";
    case enMonthOfYear::feb:
        return "February";
    case enMonthOfYear::mar:
        return "March";
    case enMonthOfYear::apr:
        return "April";
    case enMonthOfYear::may:
        return "May";
    case enMonthOfYear::jun:
        return "Jun";
    case enMonthOfYear::aug:
        return "Aust";
    case enMonthOfYear::sep:
        return "Septemper";
    case enMonthOfYear::oct:
        return "October";
    case enMonthOfYear::nov:
        return "November";
    case enMonthOfYear::dec:
        return "Decemper";
    default:
        return "Not valid Month";
    }
}
int main()
{
    cout << GetMonthOfYear(ReadMonthOfYear()) << endl;
}
