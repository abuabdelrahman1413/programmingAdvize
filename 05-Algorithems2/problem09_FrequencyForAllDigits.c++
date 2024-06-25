#include <iostream>
using namespace std;
int ReadPositiveNumber(string Mesaage)
{
    int Number;
    cout <<Mesaage;
    cin>>Number;
	cout << endl;

    return Number;
}

int FreqeuncyOfDigit (int Digit, int Number)
{
	int Reminder = 0;
	int Freqeuncy = 0;
	while (Number != 0)
	{
		Reminder = Number % 10;
		Number /= 10;
		
		if (Reminder == Digit)
		{
			Freqeuncy += 1;
		}
	}

	return Freqeuncy;
}

void PrintAllDigitsFrequency(int Number)
{
	cout << endl;

	for(int i = 0; i < 10; i++)
	{
		int DigitFrequency = 0;
		DigitFrequency = FreqeuncyOfDigit(i, Number);

		if (DigitFrequency > 0)
		{
			cout << "Digit " << i << " Freqeuncy is " << DigitFrequency << " Times\n";
		}
	}
}

int main()
{
	int Number = ReadPositiveNumber("Please enter a Number: ");

	PrintAllDigitsFrequency(Number);

	return 0;
}
