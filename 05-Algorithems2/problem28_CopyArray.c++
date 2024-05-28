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

    void ArrayCopy(int ArraySrc[100], int ArrayDes[100], int LengthOfArray)
    {
        for(int i = 0; i < LengthOfArray; i++)
        {
            ArrayDes[i] = ArraySrc[i];
        }

    }

int main()
{
	srand ((unsigned) time (NULL));
	int ArraySrc[100];
    int ArrayDes[100];
    int LengthOfArray;


	FillArrayWithRanomNumbers(ArraySrc, LengthOfArray);
	cout << "Array 1 Elements: ";
	PrintArray(ArraySrc, LengthOfArray);
    ArrayCopy(ArraySrc,ArrayDes ,LengthOfArray );
    cout << endl;
    cout << "Array 2 Elements: ";
    PrintArray(ArrayDes, LengthOfArray);
    cout << endl;





	return 0;
}
