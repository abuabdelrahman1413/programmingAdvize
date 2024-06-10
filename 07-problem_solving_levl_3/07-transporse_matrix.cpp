#include <iostream>
#include <iomanip>
using namespace std;

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

int main()
{
    int arr[3][3];
    int arrTrnsposed[3][3];

    cout << "\nThe following is a matrix 3x3 orderd matrix:\n";
    FillMatrixWithOrderdNumbers(arr, 3, 3);
    PrintMatrix(arr, 3, 3);

    TrnsposeMatrix(arr, arrTrnsposed, 3, 3);
    cout << "\nThe following is a transposed matrix 3x3 orderd matrix:\n";
    PrintMatrix(arrTrnsposed, 3, 3);
    return 0;
}