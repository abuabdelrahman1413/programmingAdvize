#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
enum enPrimeNotPrime {Prime=1, NotPrime=2};

int ReadPositiveNumber(string Mesaage)
{
    int Number;
    cout <<Mesaage;
    cin>>Number;

    return Number;
}

enPrimeNotPrime CheckPrime(int Number)
{
    int M = round(Number/2);
    for (int i = 2; i <= M; i++)
    {
        if(Number%i == 0)
        {
            return enPrimeNotPrime::NotPrime;
        }
    }
    return enPrimeNotPrime::Prime;
}

void PrintPrimeNumbersFrom1ToN(int Number)
{
 cout << "\n";
 cout << "Prime Numbers From 1 To " << Number;
 cout << "are : " << endl;
 for (int i=1; i <= Number; i++)
 {
     if (CheckPrime(i) == enPrimeNotPrime::Prime)
     {
         cout << i << endl;
    }
}
}

int main()
{
    PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("Please Enter a positive number?"));
}
