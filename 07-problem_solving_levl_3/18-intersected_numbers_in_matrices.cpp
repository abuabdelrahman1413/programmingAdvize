#include "matrixLib.hpp"

int main()
{
	int Matrix1[3][3] = {{77, 3, 6},{18, 91, 10},{23, 5, 9}};
	int Matrix2[3][3] = {{73, 10, 9},{8, 1, 12},{73, 53, 7}};

	cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);
	cout << "\nMatrix2:\n";
	PrintMatrix(Matrix2, 3, 3);
	cout <<"\nIntersected numbers are:\n\n";
	IntersectedNumbers(Matrix1, Matrix2, 3, 3);

	return 0;
}
