#include <iostream>
#include <cmath>
using namespace std;
enum enPrimeNotPrime {Prime=1, NotPrime=2};
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

enPrimeNotPrime CheckPrime(int Number)
{
    int M = round(Number/2);
    for (int i = 2; i <= M; i++)
    {
        if(Number%i == 0)
        {
            return enPrimeNotPrime::NotPrime;
        }
    }
    return enPrimeNotPrime::Prime;
}

void AddElementsToArray(int Number,int ArrayDes[100], int &LengthOfArray2)
{
	ArrayDes[LengthOfArray2] = Number;
	LengthOfArray2++;
}

void ArrayCopyPrimeElements(int ArraySrc[100], int ArrayDes[100], int LengthOfArray, int& LengthOfArray2)
{
  for(int i = 0; i < LengthOfArray; i++)
 {
     if (CheckPrime(ArraySrc[i]) == enPrimeNotPrime::Prime)
	 {
		AddElementsToArray(ArraySrc[i], ArrayDes, LengthOfArray2);
	 }
 }

}

int main()
{
	srand ((unsigned) time (NULL));
	int ArraySrc[100];
    int ArrayDes[100];
    int LengthOfArray;
	int LengthOfArray2 = 0;


	FillArrayWithRanomNumbers(ArraySrc, LengthOfArray);
	cout << "Array 1 Elements: ";
	PrintArray(ArraySrc, LengthOfArray);
    ArrayCopyPrimeElements(ArraySrc,ArrayDes ,LengthOfArray, LengthOfArray2 );
    cout << endl;
    cout << "Array 2 Elements: ";
    PrintArray(ArrayDes, LengthOfArray2);
    cout << endl;





	return 0;
}
