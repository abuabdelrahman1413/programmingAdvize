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



int main()
{
    srand(unsigned(time(NULL)));
    int Matrix[3][3];
    FillMatrixWithRandomNumbers(Matrix, 3, 3);
   
    cout << "Matrix 1:" << endl;
    PrintMatrix(Matrix, 3, 3);
    cout << "\nMiddle Row of matrix is: \n";
    PrintMiddleRow(Matrix, 3, 3);
    cout << "\nMiddle Column of matrix is: \n";
    PrintMiddleColumn(Matrix, 3, 3);

   

    return 0;
}