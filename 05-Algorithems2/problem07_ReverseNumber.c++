#include <iostream>
using namespace std;
int ReadPositiveNumber(string Mesaage)
{
    int Number;
    cout <<Mesaage;
    cin>>Number;

    return Number;
}

int ReverseNumber(int Number)
{
	int Reminder = 0;
	int reverse = 0;
	while (Number != 0)
	{
		Reminder = Number % 10;
		reverse = (reverse * 10) + Reminder;
		Number /= 10;
	}

	return reverse;
}

int main()
{
	int Reverse =  ReverseNumber(ReadPositiveNumber("Please enter a number "));
	cout << endl;

	cout << "Reversed Number = "<<Reverse << endl;
	return 0;
}
