#include <iostream>
using namespace std;
// Weeks and Days Number of hours
float ReadpositiveNumbers(string Message)
{
    float Hours = 0;

    do {
        cout << Message << endl;
        cin >> Hours;
    } while (Hours <= 0);

    return Hours;
}

float HoursToDays(float NumberOfHours)
{
    return (float)NumberOfHours / 24;
}

float HoursToWeeks(float NumberOfHours)
{
    return (float)NumberOfHours / 24 / 7;
}

float DaysToWeeks(float NumberOfDays)
{
    return (float)NumberOfDays / 7;
}

int main()
{
    float NumberOfHours = ReadpositiveNumbers("Please Enter of Hours?");
    float NumberOfDays = HoursToDays(NumberOfHours);
    float NumberOfWeeks = DaysToWeeks(NumberOfDays);

    cout << endl;
    cout << "Total Hours = " << NumberOfHours << endl;
    cout << "Total Days = " << NumberOfDays << endl;
    cout << "Total Weeks = " << HoursToWeeks(NumberOfHours) << endl;
    return 0;
}
