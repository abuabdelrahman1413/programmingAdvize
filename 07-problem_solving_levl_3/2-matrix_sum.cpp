
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
* Print Matrix
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

int RowSum(int arr[3][3], int RowNumber, int Col)
{
	int sum = 0;
	for(int i = 0; i < Col; i++)
	{
		sum += arr[RowNumber][i];
	}
	return sum;
}

void SumMatrix(int arr[3][3], int Row, int Col)
{
	for(int i = 0; i < Row; i++)
	{
		cout << "Row "<<i<<" sum = " << RowSum(arr, i, Col) << endl;
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
	cout << "\nThe following is a matrix 3x3:\n";
	FillMatrixWithRandomNumbers(arr, 3, 3);
	SumMatrix(arr, 3, 3);

	return (0);
}
