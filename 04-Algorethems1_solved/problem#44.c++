#include <iostream>
#include <string>
using namespace std;
// Day of week
enum enDayOfWeek {
    sat = 1,
    sun = 2,
    mon = 3,
    tue = 4,
    wed = 5,
    thr = 6,
    fri = 7
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

enDayOfWeek ReadDayOfWeek()
{
    return (enDayOfWeek)ReadNumberInRange("Please enter a day number 1-7? ", 1, 7);
}

string GetDayOfWeek(enDayOfWeek Day)
{
    switch (Day) {
    case enDayOfWeek::fri:
        return "Friday";
    case enDayOfWeek::sat:
        return "Saturday";
    case enDayOfWeek::mon:
        return "Monday";
    case enDayOfWeek::thr:
        return "Thursday";
    case enDayOfWeek::wed:
        return "Wednesday";
    case enDayOfWeek::tue:
        return "Tuseday";
    case enDayOfWeek::sun:
        return "Sunday";
    default:
        return "Not valid day";
    }
}
int main()
{
    cout << GetDayOfWeek(ReadDayOfWeek()) << endl;
}
