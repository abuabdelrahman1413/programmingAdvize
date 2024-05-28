#include <iostream>
using namespace std;


int ReadPositiveNumber(string Mesaage)
{
    int Number;
    cout <<Mesaage;
    cin>>Number;

    return Number;
}

bool IsPercfet(int Number)
{
    int sum = 0;
    for(int i = 1; i <Number; i++ )
    {
        if(Number % i == 0)
            sum += i;
    }
    if(sum == Number)
        return true;
    else
        return false;
}

void PrintResult(int Number)
{
    if(IsPercfet(Number))
        cout <<Number << " Is perfect Number" << endl;
    else
         cout <<Number << " Is not perfect Number" << endl;
}

int main()
{
    PrintResult(ReadPositiveNumber("Please Enter a number\n"));
}
