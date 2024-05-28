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

int main()
{
	int Number, Digit, Freqeuncy;
	Number = ReadPositiveNumber("Please enteer a Number: ");
	Digit = ReadPositiveNumber("Please enter a Digit");
	Freqeuncy = FreqeuncyOfDigit(Digit, Number);
	cout << endl << "Digit " << Digit << " Frequency is " << Freqeuncy << endl;

	return 0;
}
