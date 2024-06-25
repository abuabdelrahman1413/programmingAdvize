#include "matrixLib.hpp"
#include <iostream>

int main()
{
	int matrix[3][3] = {{1,2,1},{5,5,5},{7,3,7}};
	cout << "\nMatrix:\n";
	PrintMatrix(matrix, 3, 3);
	if(isPalindromeMatrix(matrix, 3, 3))
	{
		cout << "\nMatrix is palindrome" << endl;
	}
	else
	{
		cout << "\nMatrix is not palindrome" << endl;
	}
}
