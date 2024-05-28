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

void CopyArrayInreverse(int Array1[100], int Array2[11], int LengthOfArray)
{
	for(int i = 0; i <= LengthOfArray -1; i++)
		Array2[i] = Array1[LengthOfArray -1 -i];
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
	srand ((unsigned) time (NULL));
	int Array1[100];
	int Array2[100];
	int LengthOfArray;

	FillArrayWithRandomNumbers(Array1, LengthOfArray);

	cout << "Array 1 Elements: ";
	PrintArray(Array1, LengthOfArray);
	cout << endl;

	CopyArrayInreverse(Array1, Array2, LengthOfArray);

	cout << "Array 2 Elements: ";
	PrintArray(Array2, LengthOfArray);

	return 0;

}
