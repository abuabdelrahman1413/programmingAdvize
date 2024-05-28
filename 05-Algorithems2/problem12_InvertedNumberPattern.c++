
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

void InvertedNumberPattern(int Number)
{	cout << endl;
	while (Number != 0) //can use for(int i =Number; i>=1; i--)
	{
		for (int i = 1; i <= Number; i++)
		{
			cout << Number;
		}
		Number--;
		cout << endl;
	}
}

int main()
{
	InvertedNumberPattern(ReadPositiveNumber("Please Enter a Number: "));
}
