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
int RandomNumber(int From, int To)
{
    return (rand() % (To - From + 1) + From);
}

/**
* Fill Matrix with Random Numbers
* @param arr
* @param Row
* @param Col
*/
void FillMatrixWithRandomNumbers(int arr[3][3], int Row, int Col)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            arr[i][j] = RandomNumber(1, 10);
        }
    }
}

// ... (rest of the functions)

/**
* Check if a matrix is a scalar matrix
* @param arr - Matrix
* @param Rows - Number of rows in the matrix
* @param Cols - Number of columns in the matrix
* @return true if the matrix is a scalar matrix, false otherwise
*/
bool CheckScalarMatrix(int arr[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (i == j && arr[i][j] != arr[i][j])
                return false;

            else if (i != j && arr[i][j] != 0)
                return false;
        }
    }
    return true;
}

int CountElementInMatrix(int arr[3][3], int Row, int Col, int element)
{
	int Count = 0;
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
	    if (arr[i][j] == element)
	    {
		Count++;
	    }

        }
    }
    return Count;
}

void PrintMatrix(int Matrix[3][3],int Rows , int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
	for (int j = 0; j < Cols; j++)
	{
	    cout << setw(3) << Matrix[i][j] << " ";
	}
	cout << endl;
    }
}

bool IsSparseMatrix(int arr[3][3], int Row, int Col)
{
	int Zeros = CountElementInMatrix(arr, Row, Col, 0);
	if(Zeros > Row*Col/2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isElemntExist(int arr[3][3], int Row, int Col, int element)
{
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			if (arr[i][j] == element)
			{
				return true;
			}
		}
	}
	return false;
}
void IntersectedNumbers(int Matrix1[3][3], int Matrix2[3][3], int Row, int Col)
{

	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			if (isElemntExist(Matrix2, 3, 3, Matrix1[i][j]))
			{
				cout << Matrix1[i][j] << " ";
			}
		}
	}
}
int MinNumberInMatrix(int arr[3][3], int Row, int Col)
{
	int Min = arr[0][0];
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			if (arr[i][j] < Min)
			{
				Min = arr[i][j];
			}
		}
	}
	return Min;
}

int MaxNumberInMatrix(int arr[3][3], int Row, int Col)
{
	int Max = arr[0][0];
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			if (arr[i][j] > Max)
			{
				Max = arr[i][j];
			}
		}
	}
	return Max;
}

bool IsPalindrome(int Array[100],int LengthOfArray)
{
	for (int i=0; i <= LengthOfArray / 2; i++)
	{
		if (Array[i] != Array[LengthOfArray -i -1])
			return false;
	}
	return true;
}

bool isPalindromeMatrix(int matrix[3][3], int Row, int Col)
{
	for(int i = 0; i < Row; i++)
	{
		if(!IsPalindrome(matrix[i], 3))
			return false;
	}
	return true;
}
