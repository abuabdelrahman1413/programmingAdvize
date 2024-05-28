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

int RandomNumber (int From, int To)
{
	return (rand()%(To - From +1) + From);
}

void FillArrayWithRandomNumbers(int Array[100], int &LengthOfArray)
{
	LengthOfArray = ReadPositiveNumber("Please Enter Length of Array: ");
	for(int i = 0; i <= LengthOfArray - 1; i++)
	{
		Array[i] = RandomNumber(1, 100);
	}
}

void PrintArray (int Array[100], int LengthOfArray)
{
	for(int i = 0; i <= LengthOfArray -1; i++)
	{
		cout << Array[i] << " ";
	}
	cout << "\n";
}

int NumberIndex(int Array[100],int NumberToCheck,int LengthOfArray)
{
	int i;

	for(i = 0; i <= LengthOfArray -1; i++)
	{
		if (NumberToCheck == Array[i])
			return i;
	}

	return -1;
}

int main()
{
	srand ((unsigned) time (NULL));
	int Array[100];
	int LengthOfArray;
	int NumberToSearchFor;


	FillArrayWithRandomNumbers(Array, LengthOfArray);

	cout << "Array Elements: ";
	PrintArray(Array, LengthOfArray);
	cout << endl;

	NumberToSearchFor = ReadPositiveNumber("Please enter number to search for: ");
 
	int Number = NumberIndex(Array, NumberToSearchFor, LengthOfArray);

	cout << "Number your Looking for is: " << NumberToSearchFor;
	cout << endl;
	if(Number == -1)
		cout << "Number not found :-(\n";
	else
	{
		cout << "The Number found at position: " << Number; 
		cout << endl;
		cout << "The Number found  it's order: " << Number+1; 
		cout << endl;
	}

}
