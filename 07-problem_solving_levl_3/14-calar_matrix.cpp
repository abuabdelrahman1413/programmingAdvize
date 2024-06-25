#include "matrixLib.hpp"  // Including the header file for the matrix library.

int main()
{
    int Matrix[3][3] = {{9, 0, 0}, {0, 9, 0}, {0, 0, 4}};
    // Defining a 3x3 matrix with values.

    // FillMatrixWithRandomNumbers(Matrix, 3, 3); 
    // This line is commented out. 
    // This function is not being used, so it is not necessary to execute it.

    cout << "\nMatrix: \n"; // Printing a new line and displaying the word "Matrix:".
    PrintMatrix(Matrix, 3, 3); // Calling the PrintMatrix function to print the matrix.

    if (CheckScalarMatrix(Matrix, 3, 3)) // Checking if the matrix is a scalar matrix.
    {
        cout << endl << "Matrix is Scalar" << endl; // Printing that the matrix is a scalar matrix.
    }
    else
    {
        cout << endl << "Matrix is not Scalar" << endl; // Printing that the matrix is not a scalar matrix.
    }
}
