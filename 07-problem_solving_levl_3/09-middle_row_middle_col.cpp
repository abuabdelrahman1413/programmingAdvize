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

void MiddleRow(int arr[3][3], int arrMidRow[3],int Row, int Col)
{
    for(int i = 0; i < Col; i++)
    {
        arrMidRow[i] = arr[1][i];
    }
}

void MiddleCol(int arr[3][3], int arrMidCol[3],int Row, int Col)
{
    for(int i = 0; i < Row; i++)
    {
        arrMidCol[i] = arr[i][1];
    }
}



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

void PrintArray(int arr[3], int Size)
{
	for(int i = 0; i < Size; i++)
	{
		printf(" %0*d  ", 2,arr[i]);
	}
}




int main()
{
    srand(unsigned(time(NULL)));
    int arr1[3][3], arrMidleRow[3];
    FillMatrixWithRandomNumbers(arr1, 3, 3);
   
    cout << "Matrix 1:" << endl;
    PrintMatrix(arr1, 3, 3);
    cout << endl;
    MiddleRow(arr1, arrMidleRow,3, 3);
    cout << "Middle Row:" << endl;
    PrintArray(arrMidleRow, 3);
    cout << endl;
    MiddleCol(arr1, arrMidleRow,3, 3);
    cout << "Middle Col:" << endl;
    PrintArray(arrMidleRow, 3);
    cout << endl;
   

    return 0;
}