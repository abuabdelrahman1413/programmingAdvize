#include <cstddef>
#include <cstdlib>
#include <endian.h>
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

void AddElementsToArray(int Number,int Array[100], int &LengthOfArray)
{
	Array[LengthOfArray] = Number;
	LengthOfArray++;
}

void InputUserNumbersInArray(int Array[100], int& LengthOfArray)
{
	bool AddMore = true;
	do
	{
		AddElementsToArray(ReadPositiveNumber("Please enter a number: "),Array,LengthOfArray);
		cout <<"Do you want to Add More Element [0]:No [1]:Yes? \n";
		cin >> AddMore;
	} while(AddMore);
}

void PrintArray (int Array[100], int LengthOfArray)
{
	for(int i = 0; i <= LengthOfArray -1; i++)
	{
		cout << Array[i] << " ";
	}
	cout << "\n";
}

int main()
{
	int Array[100], LengthOfArray = 0;
	InputUserNumbersInArray(Array,LengthOfArray);

	cout << "\nArray Length: " << LengthOfArray << endl;
	cout << "Array Elemnts: ";
	PrintArray(Array,  LengthOfArray);
}
