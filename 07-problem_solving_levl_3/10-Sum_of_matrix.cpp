#include "matrixLib.hpp"

int main()
{
    int Matrix[3][3];
    FillMatrixWithRandomNumbers(Matrix, 3, 3);
    PrintMatrix(Matrix, 3, 3);
    int Sum = SumOfMatrix(Matrix, 3, 3);
    printf("Sum = %d\n", Sum);

    return 0;
}