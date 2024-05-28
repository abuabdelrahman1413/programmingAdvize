#include <iostream>
using namespace std;

int ReadPositiveNumber(string Mesaage)
{
    int Number;
    cout <<Mesaage;
    cin>>Number;

    return Number;
}


void PrintDigitsRevrse(int Number)
{
    while (Number != 0) {

        cout <<Number % 10 << endl;
         Number /= 10;
}
}

int main()
{
    PrintDigitsRevrse(ReadPositiveNumber("Please Enter a Number\n"));
}
