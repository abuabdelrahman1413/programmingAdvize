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

bool CheckNumberInArray(int Array[100],int NumberToCheck,int LengthOfArray)
{
	int i;

	for(i = 0; i <= LengthOfArray -1; i++)
	{
		if (NumberToCheck == Array[i])
			return true;
	}

	return false;
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
 
	bool IsNumber = CheckNumberInArray(Array, NumberToSearchFor, LengthOfArray);

	cout << "Number your Looking for is: " << NumberToSearchFor;
	cout << endl;
	if(IsNumber == false)
		cout << "Number not found :-(\n";
	else
	{
		cout << "The Number is found :-)\n";  
	}

}
