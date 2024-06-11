#include "matrixLib.hpp"

int main()
{
    int Matrix1[3][3], Matrix2[3][3];
    FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    FillMatrixWithRandomNumbers(Matrix2, 3, 3);
    cout << "Matrix1: " << endl;
    PrintMatrix(Matrix1, 3, 3);
    cout << "Matrix2: " << endl;
    PrintMatrix(Matrix2, 3, 3);
    if (CheckEqualMatrices(SumOfMatrix(Matrix1,3,3), SumOfMatrix(Matrix2,3,3)))
    {
        cout << "Matrices are equal" << endl;
    }
    else
    {
        cout << "Matrices are not equal" << endl;
    }
}