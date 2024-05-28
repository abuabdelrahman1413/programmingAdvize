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

void PrintDigitsInOrder(int Number)
{
    while (Number != 0) {

        cout <<Number % 10 << endl;
         Number /= 10;
	}
}

int main()
{
	PrintDigitsInOrder(ReverseNumber(ReadPositiveNumber("Please Enter a Number\n")));
}
