#include <iostream>
using namespace std;
//Check even or odd;

enum enNumber_Type {Odd = 1, Even = 2};

int Read_Number()
{
    int Number;

    cout << "Please enter a number to check? \n";
    cin >> Number;
    return Number;
}

enNumber_Type Check_Number_Type(int Number)
{
    

    if (Number % 2 == 0)
        return enNumber_Type::Even;
    else
        return enNumber_Type::Odd;
}

void Print_Number_Type(enNumber_Type Number_Type)
{
    if (Number_Type == enNumber_Type::Even)
    {
        cout << "\nNumber is Even.\n";
    }

    else
    {
        cout << "\nNumber is Odd.\n";
    }
}

int main()
{
    Print_Number_Type(Check_Number_Type(Read_Number()));
}