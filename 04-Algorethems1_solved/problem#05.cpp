#include <iostream>
using namespace std;

//Hire Driver case 2;
struct stInfo
{
    int Age;
    bool Has_Driver_License;
    bool Has_Recomindation;
};

stInfo Read_Info()
{
    stInfo Info;

    cout << "Please Enter Your Age?\n";
    cin >> Info.Age;
    cout << "Do you have driver license?\n";
    cin >> Info.Has_Driver_License;
    cout << "Do you Recommendation?\n";
    cin >> Info.Has_Recomindation;

    return Info;
}

bool Is_Accebted(stInfo Info)
{
    if (Info.Has_Recomindation)
        return true;
    else
        return (Info.Age > 21 && Info.Has_Driver_License);
}

void Print_Result(stInfo Info)
{
    if (Is_Accebted(Info))
        cout << "\nHired\n";
    else
        cout << "\nRejected\n";
}

int main()
{
    Print_Result(Read_Info());
}