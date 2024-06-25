#include <iostream>
using namespace std;
int ReadPositiveNumber(string Mesaage)
{
    int Number;
    cout <<Mesaage;
    cin>>Number;

    return Number;
}

int SumOfDigits(int Number)
{
	int sum = 0;

	while (Number != 0) 
	{
		sum = sum + (Number % 10);
		Number /= 10;
	}

	return sum;
}
int main()
{
	cout << "\nThe sum of digits is "
	 << SumOfDigits(ReadPositiveNumber("Please enter a number: "))
	 <<"\n";
	return 0;
}
