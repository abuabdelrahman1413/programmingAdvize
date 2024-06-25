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

int RandomNumber(int From, int To)
{

    return (rand() % (To - From + 1) + From);

}

void FillArrayWithRandomNumbers(int Array[100], int LengthOfArray)
{

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

void SumOf2Arrays(int Array1[100], int LengthOfArray, int Array2[100],int Array3[100])
{
	int j = 0;

	for(int i = 0; i < LengthOfArray; i++)
	{
		Array3[j] = Array1[i] + Array2[i];
		j++;
	}

}

int main()
{
	srand ((unsigned) time (NULL));

	int Array1[100];
	int Array2[100];
	int Array3[100];
    int LengthOfArray;

	LengthOfArray = ReadPositiveNumber("Please Enter Length of Array: ");

	FillArrayWithRandomNumbers(Array1, LengthOfArray);
	cout << "Array 1 Elements: ";
	PrintArray(Array1, LengthOfArray);
    cout << endl;
	FillArrayWithRandomNumbers(Array2, LengthOfArray);
	cout << "Array 2 Elements: ";
	PrintArray(Array2, LengthOfArray);
    cout << endl;
	SumOf2Arrays(Array1, LengthOfArray, Array2, Array3);
	cout << "Array 3 Elements: ";
	PrintArray(Array3, LengthOfArray);
	return 0;
}
