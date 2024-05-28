#include <iostream>
#include <limits>
#include <math.h>
#include <string>
using namespace std;
// Task Duration In Seconds
struct stTaskDuration {
    int NumberOfDays, NumberOfHours, NumberOfMinuts, NumberOfSeconds;
};

int ReadpositiveNumbers(string Message)
{
    int Number = 0;

    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

stTaskDuration SecondToTaskDuration(int TotalSeconds)
{
    stTaskDuration TaskDuration;
    const int SecondsPerDay = 24 * 60 * 60;
    const int SecondsPerHour = 60 * 60;
    const int SecondsPerMinuts = 60;

    int Reminder = 0;
    TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
    Reminder = TotalSeconds % SecondsPerDay;
    TaskDuration.NumberOfHours = floor(Reminder / SecondsPerHour);
    Reminder = Reminder % SecondsPerHour;
    TaskDuration.NumberOfMinuts = floor(Reminder / SecondsPerMinuts);
    Reminder = Reminder % SecondsPerMinuts;
    TaskDuration.NumberOfSeconds = Reminder;

    return TaskDuration;
}

void PrintDurationDetails(stTaskDuration TaskDuration)
{
    cout << endl;
    cout << TaskDuration.NumberOfDays << ":"
         << TaskDuration.NumberOfHours << ":"
         << TaskDuration.NumberOfMinuts << ":"
         << TaskDuration.NumberOfSeconds << ":" << endl;
}

int main()
{
    int TotalSeconds = ReadpositiveNumbers("Please enter Total Seconds?");
    PrintDurationDetails(SecondToTaskDuration(TotalSeconds));
}
