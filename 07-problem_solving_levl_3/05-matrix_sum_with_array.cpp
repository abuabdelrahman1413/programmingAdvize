#include <iostream>
using namespace std;


#include <cstddef>
#include <cstdlib>
#include <exception>
#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

/**
* Random number generator
* @param From
* @param To
* @return Random number
*/

int RandomNumber (int From, int To)
{
	return (rand()%(To - From +1) + From);
}

/**
* Fill Matrix with Random Numbers
* @param arr
* @param Row
* @param Col
*/

void FillMatrixWithRandomNumbers(int arr[3][3], int Row, int Col)
{
	for(int i = 0; i < Row; i++)
	{
		for(int j = 0; j < Col; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}

/**
 * Print Matrix - function
 * @param arr
 * @param Row
 * @param Col
 */

void PrintMatrix(int arr[3][3], int Row, int Col)
{
	for(int i = 0; i < Row; i++)
	{
		for(int j = 0; j < Col; j++)
		{
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
}

int ColSum(int arr[3][3], int Row, int Col)
{
    int Sum = 0;
    for(int i = 0; i < Row; i++)
    {
        Sum += arr[i][Col];
    }
    return (Sum);
}

void SumMatrixColsInArray(int arr[3][3], int arrSum[3], int Row, int Col)
{
    for(int i = 0; i < Col; i++)
    {
        arrSum[i] = ColSum(arr, Row, i);
    }
}

void PrintColsSumArray(int arrSum[3], int Col)
{
   for(int i = 0; i < Col; i++)
   {
       cout << " Col " << i +1 << " sum is " << arrSum[i] << endl;
   }
}

/**
* main
* Return 0
*/

int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];
    int arrSum[3];

	cout << "\nThe following is a matrix 3x3:\n";
    	FillMatrixWithRandomNumbers(arr, 3, 3);

	PrintMatrix(arr, 3, 3);
    SumMatrixColsInArray(arr, arrSum, 3, 3);

    PrintColsSumArray(arrSum, 3);

	return (0);
}
