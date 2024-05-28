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

void PrintPerfectNumbersFrom1ToN(int Number)
{
  for(int i = 1; i <= Number; i++)
  {
      if(IsPercfet(i))
          cout << i <<endl;
}
}

int main()
{
    PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("Please Enter a number\n"));
}
