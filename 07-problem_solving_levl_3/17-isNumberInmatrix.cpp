#include "matrixLib.hpp"

/**
* main - Entry point
* Return: 0
*/

int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int Row = 3, Col = 3;
	cout << "\nThe following is a matrix 3x3:\n";
	PrintMatrix(arr, Row, Col);
	cout << "\nElement to search: " << endl;
	int element;
	cin >> element;
	if (isElemntExist(arr, Row, Col, element))
	{
		cout << "Element found" << endl;
	}
	else
	{
		cout << "Element not found" << endl;
	}
}
