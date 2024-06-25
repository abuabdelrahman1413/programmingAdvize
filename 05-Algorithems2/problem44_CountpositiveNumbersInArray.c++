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

void FillArrayWithRanomNumbers (int Array[100], int &LengthOfArray)
{
	LengthOfArray = ReadPositiveNumber("Please Enter Length of Array: ");
	for(int i = 0; i <= LengthOfArray - 1; i++)
	{
		Array[i] = RandomNumber(-100, 100);
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

int ConutPositiveNumbersInArray(int Array[100], int LengthOfArray)
{
  int Count = 0;
  for(int i = 0; i < LengthOfArray; i++)
 {
     if (Array[i] >= 0)
	 {
		 Count++;
	 }
 }
  return Count;

}

int main()
{
	srand ((unsigned) time (NULL));
	int Array[100];
    int LengthOfArray;


	FillArrayWithRanomNumbers(Array, LengthOfArray);
	cout << "Array 1 Elements: ";
	PrintArray(Array, LengthOfArray);
    cout << endl;

	cout << "Positive numbers counts is: " << ConutPositiveNumbersInArray(Array,LengthOfArray) << endl;

	return 0;
}
