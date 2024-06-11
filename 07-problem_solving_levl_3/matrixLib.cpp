#include <iostream>
#include <iomanip>
#include <cstdio>
#include "matrixLib.hpp"
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

void PrintMiddleRow(int arr[3][3], int Row, int Col)
{
    int MidRow = Row/2;
    for(int j = 0; j < Col; j++)
    {
        printf(" %0*d  ", 2,arr[MidRow][j]);
    }
}

void PrintMiddleColumn(int arr[3][3], int Row, int Col)
{
    int MidCol = Col/2;
    for(int j = 0; j < Row; j++)
    {
        printf(" %0*d  ", 2,arr[j][MidCol]);
    }
}

void PrintArray(int arr[3], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf(" %0*d  ", 2,arr[i]);
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

void TrnsposeMatrix(int arr[3][3], int arrTransposed[3][3], int Row, int Col)
{
    for(int i = 0; i < Row; i++)
    {
        for(int j = 0; j < Col; j++)
        {
            arrTransposed[i][j] = arr[j][i];
        }
    }
}

void FillMatrixWithOrderdNumbers(int arr[3][3], int Row, int Col)
{
    int counter = 0;
    for(int i = 0; i < Row; i++)
    {
        for(int j = 0; j < Col; j++)
        {
            counter++;
            arr[i][j] = counter;
        }
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

int RowSum(int arr[3][3], int RowNumber, int Col)
{
	int sum = 0;
	for(int i = 0; i < Col; i++)
	{
		sum += arr[RowNumber][i];
	}
	return sum;
}

int SumOfMatrix(int arr[3][3], int Row, int Col)
{
    int Sum = 0;
    for(int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            Sum = Sum + arr[i][j];
        }
        
    }
    return Sum;
}

bool CheckEqualMatrices (int SumMatrix1, int SumMatrix2)
{
    return SumMatrix1 == SumMatrix2;
}

bool CheckTypicalMatrices (int arr1[3][3], int arr2[3][3], int Row, int Col)
{
    for(int i = 0; i < Row; i++)
    {
        for(int j = 0; j < Col; j++)
        {
            if(arr1[i][j] != arr2[i][j])
            {
                return false;
            }
        }
    }
    return true;
}

bool CheckIdentittyMatrix(int arr[3][3], int Rows, int Cols)
{
    for(int i = 0; i < Rows; i++)
    {
        for(int j = 0; j < Cols; j++)
        {
            if(i == j)
            {
                if(arr[i][j] != 1)
                    return false;
            }
            else
            {
                if(arr[i][j] != 0)
                    return false;
            }
        }
    }
    return true;
}
