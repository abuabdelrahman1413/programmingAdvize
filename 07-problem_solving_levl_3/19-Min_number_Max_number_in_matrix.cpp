#include "matrixLib.hpp"

int main()
{
	int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	cout <<"\nMatrix:\n";
	PrintMatrix(arr, 3, 3);
	cout <<"\nMinimum number in the matrix: " << MinNumberInMatrix(arr, 3, 3) << endl;
	cout <<"\nMaximum number in the matrix: " << MaxNumberInMatrix(arr, 3, 3) << endl;
	return 0;
}
