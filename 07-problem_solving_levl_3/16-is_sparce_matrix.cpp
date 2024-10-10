#include "matrixLib.hpp"
int main()
{
    int Matrix[3][3] = {{9, 8, 1}, {0, 9, 0}, {0, 0, 4}};
    // Defining a 3x3 matrix with values.

    // FillMatrixWithRandomNumbers(Matrix, 3, 3);
    // This line is commented out.
    // This function is not being used, so it is not necessary to execute it.

    cout << "\nMatrix: \n"; // Printing a new line and displaying the word "Matrix:".
    PrintMatrix(Matrix, 3, 3); // Calling the PrintMatrix function to print the matrix.

    if (IsSparseMatrix(Matrix, 3, 3))
    {
	cout << "\nMatrix is sparse.\n";
    }
    else
    {
	cout << "\nMatrix is not sparse.\n";
    }
    return 0;
}
