#include <iostream>
#include <limits>
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

stTaskDuration ReadTaskDuration()
{
    stTaskDuration TaskDuration;
    TaskDuration.NumberOfDays = ReadpositiveNumbers("Please enter Number of Days?");
    TaskDuration.NumberOfHours = ReadpositiveNumbers("Please enter Number of Hours?");
    TaskDuration.NumberOfMinuts = ReadpositiveNumbers("Please enter Number of Minuts?");
    TaskDuration.NumberOfSeconds = ReadpositiveNumbers("Please enter Number of Seconds?");

    return TaskDuration;
}

int TaskDurationInSeconds(stTaskDuration TaskDuration)
{
    int DurationInSeconds = 0;
    DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfMinuts * 60;
    DurationInSeconds += TaskDuration.NumberOfSeconds;

    return DurationInSeconds;
}
int main()
{
    cout << "\nTask Duration In Seconds: " << TaskDurationInSeconds(ReadTaskDuration()) << endl;
}
