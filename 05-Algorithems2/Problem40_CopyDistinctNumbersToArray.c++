#include <iostream>
#include <cmath>
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

void ReadArray(int Array[100], int &LengthOfArray)
{
	LengthOfArray = ReadPositiveNumber("Enter LengthOfArray: ");
	for (int i = 0; i <= LengthOfArray -1; i++)
	{
		cout << "\nPlease Enter Element["<<i+1<<"]: ";
		cin >> Array[i];
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

bool IsElementRepeated(int Number, int Array2[100], int LengthOfArray2)
{
	for (int i = 0; i<= LengthOfArray2; i++)
	{
		if(Number==Array2[i])
			return true;
	}
	return false;
}

void AddElementsToArray(int Number,int ArrayDes[100], int &LengthOfArray2)
{
	ArrayDes[LengthOfArray2] = Number;
	LengthOfArray2++;
}

void ArrayCopyPrimeElements(int Array1[100], int Array2[100], int LengthOfArray, int& LengthOfArray2)
{
  for(int i = 0; i < LengthOfArray; i++)
 {
     if (!IsElementRepeated(Array1[i], Array2, LengthOfArray2))
	 {
		AddElementsToArray(Array1[i], Array2, LengthOfArray2);
	 }
 }

}

int main()
{
	srand ((unsigned) time (NULL));
	int Array1[100];
    int Array2[100];
    int LengthOfArray;
	int LengthOfArray2 = 0;


	ReadArray(Array1, LengthOfArray);
	cout << "\nArray 1 Elements: ";
	PrintArray(Array1, LengthOfArray);
    ArrayCopyPrimeElements(Array1,Array2 ,LengthOfArray, LengthOfArray2 );
    cout << "\nArray 2 Elements: ";
    PrintArray(Array2, LengthOfArray2);
    cout << endl;





	return 0;
}
