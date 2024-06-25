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

void FillArrayWithRanomNumbers(int Array[100], int &LengthOfArray)
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

int MinElementInArray(int Array[100], int LengthOfArray)
{
	int Min = Array[0];
	for(int i = 0; i <= LengthOfArray -1; i++)
	{
		if (Min > Array[i])
		{
			Min = Array[i];
		}
	}
	return Min;
}

int main()
{
	srand ((unsigned) time (NULL));
	int Array[100];
	int LengthOfArray;
	int NumberToCheck;

	FillArrayWithRanomNumbers(Array, LengthOfArray);
	cout << "Array Elements: ";
	PrintArray(Array, LengthOfArray);
	cout << endl;
	cout << "Min " << MinElementInArray(Array, LengthOfArray) << endl;;
	return 0;

}
