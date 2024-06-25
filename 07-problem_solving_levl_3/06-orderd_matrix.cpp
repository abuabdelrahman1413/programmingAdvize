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

    cout << "\nThe following is a matrix 3x3 orderd matrix:\n";
    FillMatrixWithOrderdNumbers(arr, 3, 3);
    PrintMatrix(arr, 3, 3);
    return 0;
}