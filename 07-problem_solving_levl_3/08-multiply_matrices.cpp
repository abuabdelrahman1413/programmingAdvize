#include <iostream>
#include <iomanip>
#include <cstdio>
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
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void MultiplyMatrices(int arr1[3][3], int arr2[3][3], int arrResult[3][3], int Row, int Col)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            arrResult[i][j] = arr1[i][j] * arr2[i][j];
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
            
            printf(" %0*d  ", 2,arr[i][j]);
		}
		cout << endl;
	}
}



int main()
{
    srand(unsigned(time(NULL)));
    int arr1[3][3], arr2[3][3], arrResult[3][3];
    FillMatrixWithRandomNumbers(arr1, 3, 3);
    FillMatrixWithRandomNumbers(arr2, 3, 3);
    cout << "Matrix 1:" << endl;
    PrintMatrix(arr1, 3, 3);
    cout << "Matrix 2:" << endl;
    PrintMatrix(arr2, 3, 3);
    MultiplyMatrices(arr1, arr2, arrResult, 3, 3);
    cout << "Matrix Result:" << endl;
    PrintMatrix(arrResult, 3, 3);
    return 0;
}