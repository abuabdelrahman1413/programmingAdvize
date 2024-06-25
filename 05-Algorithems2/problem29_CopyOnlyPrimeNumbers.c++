#include <cmath>
#include <cstddef>
#include <cstdio>
#include <iostream>
using namespace std;
enum enPrimeNotPrime { Prime = 1, NotPrine = 2 };

int ReadPositiveNumber(string Mesaage)
{
  int Number;
  cout << Mesaage;
  cin >> Number;
  cout << endl;
  return Number;
}

int RandomNumber(int From, int To) 
{
	return (rand() % (To - From + 1) + From);
}

void FillArrayWithRanomNumbers(int Array[100], int &LengthOfArray) 
{
  LengthOfArray = ReadPositiveNumber("Please Enter Length of Array: ");
  for (int i = 0; i <= LengthOfArray - 1; i++) 
  {
    Array[i] = RandomNumber(1, 100);
  }
}

void PrintArray(int Array[100], int LengthOfArray)
{
	for (int i = 0; i <= LengthOfArray - 1; i++)
	{
		cout << Array[i] << " ";
	}
  cout << "\n";
}

enPrimeNotPrime CheckPrime(int Number)
{
	int M = round(Number / 2);
	for (int i = 2; i <= M; i++) 
	{
		if (Number % i == 0)
		{
		  return enPrimeNotPrime::NotPrine;
		}	
	}	
    return enPrimeNotPrime::Prime;
}

void ArrayCopyOfPrimeNumbers(int ArraySrc[100], int ArrayDes[100],int &LengthOfArray2, int LengthOfArray) 
{

  int j = 0;
  for (int i = 0; i < LengthOfArray; i++)
  {
    if (CheckPrime(ArraySrc[i]) == enPrimeNotPrime::Prime)
	{
      ArrayDes[j] = ArraySrc[i];
      j++;
    }
  }
  LengthOfArray2 = j;
}

int main() {
  srand((unsigned)time(NULL));
  int ArraySrc[100];
  int ArrayDes[100];
  int LengthOfArray;
  int LengthOfArray2 = 0;

  FillArrayWithRanomNumbers(ArraySrc, LengthOfArray);
  cout << "Array 1 Elements: ";
  PrintArray(ArraySrc, LengthOfArray);

  ArrayCopyOfPrimeNumbers(ArraySrc, ArrayDes, LengthOfArray2, LengthOfArray);
  cout << endl;

  cout << "Array 2 Elements: ";
  PrintArray(ArrayDes, LengthOfArray2);
  cout << endl;

  return 0;
}
