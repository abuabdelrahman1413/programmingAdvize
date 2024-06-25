#include <cstddef>
#include <cstdlib>
#include <exception>
#include <iostream>
#include <string>
using namespace std;


int ReadPositiveNumber(string Mesaage)
{
    int Number;
    cout <<Mesaage;
    cin>>Number;
	cout << endl;
    return Number;
}

void ReadArray (int Array[100], int &LengthOfArray)
{
	LengthOfArray = ReadPositiveNumber("Please Enter Length of Array: ");
	for(int i = 0; i <= LengthOfArray - 1; i++)
	{
		cout << "Element [" << i+1 <<"]: ";
		cin >> Array[i];
		cout << endl;
	}
}

void PrintArray (int Array[100], int LengthOfArray)
{
	for(int i = 0; i <= LengthOfArray -1; i++)
	{
		cout << Array[i] << " ";
	}
}

int TimesRepeated(int Array[100],int NumberToCheck,int LengthOfArray)
{
	int Counter = 0;

	for(int i = 0; i <= LengthOfArray -1; i++)
	{
		if (NumberToCheck == Array[i])
			Counter++;

	}

	return Counter;
}


int main()
{
	int Array[100];
	int LengthOfArray;
	int NumberToCheck;

	ReadArray(Array, LengthOfArray);

	NumberToCheck = ReadPositiveNumber("Please enter number to check: ");

	cout << "\nOriginal Array: ";
	PrintArray(Array, LengthOfArray);
	cout << endl << NumberToCheck << " Repeated " << TimesRepeated(Array, NumberToCheck, LengthOfArray) << " Time(s).\n"; 
	return 0;

}
