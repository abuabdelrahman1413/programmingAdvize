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

    cout << "\nNumber of 9's in the matrix: " << CountElementInMatrix(Matrix, 3, 3, 9) << endl;
    // Calling the CountElement function to count the number of 9's in the matrix.
    return 0;
}
