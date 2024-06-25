#include <iostream>
using namespace std;

int ReadPositiveNumber(string Mesaage)
{
    int Number;
	do {
		cout <<Mesaage;
		cin>>Number;
		cout << endl;
	}while (Number < 1 || Number > 26);
    
    return Number;
}

void InvertedLetterPattern(int Number)
{	cout << endl;
	while (Number != 0) //can use for(int i =Number; i>=1; i--)
	{
		for (int i = 1; i <= Number; i++)
		{
			cout << (char)(Number+64);
		}
		Number--;
		cout << endl;
	}
}

int main()
{
	InvertedLetterPattern(ReadPositiveNumber("Please Enter a Number: "));
}
