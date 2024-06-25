#include <any>
#include <iostream>
using namespace std;

int ReadPositiveNumber(string Mesaage)
{
    int Number;
    cout <<Mesaage;
    cin>>Number;
	cout << "--------------------------------------------------";
    return Number;
}

int RandomNumber(int From, int To)
{

    return (rand() % (To - From + 1) + From);

}

void FillArrayFrom1ToN(int Array[100], int &LengthOfArray)
{

	for(int i = 0; i <= LengthOfArray - 1; i++)
	{
		Array[i] = i+1;
    }
}

void ShufffleArray(int Array[100], int LengthOfArray)
{
	for(int i = 0; i <= LengthOfArray - 1; i++)
	{
		swap(Array[RandomNumber(1, LengthOfArray) - 1], Array[RandomNumber(1, LengthOfArray) -1]);
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

int main()
{
	srand ((unsigned) time (NULL));
	int Array[100];
	int LengthOfArray = ReadPositiveNumber("Please Enter Length of Array: ");

	FillArrayFrom1ToN(Array, LengthOfArray);
	cout << "\nArray Elements before shuffle: \n";
	PrintArray(Array, LengthOfArray);
	
	ShufffleArray(Array, LengthOfArray);

	cout << "\nArray Elements after shuffel: \n";
	PrintArray(Array, LengthOfArray);
    cout << endl;

	return 0;
}
