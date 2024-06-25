#include "matrixLib.hpp"

int main()
{
    int Matrix_A[3][3], Matrix_B[3][3];
    FillMatrixWithRandomNumbers(Matrix_A, 3, 3);
    FillMatrixWithRandomNumbers(Matrix_B, 3, 3);
    cout << "Matrix A" << endl;
    PrintMatrix(Matrix_A, 3, 3);
    cout << "Matrix B" << endl;
    PrintMatrix(Matrix_B, 3, 3);
    if(CheckTypicalMatrices(Matrix_A, Matrix_B, 3, 3))
    {
        cout << "Matrices are typical" << endl;
    }
    else
    {
        cout << "Matrices are not typical" << endl;
    }
}