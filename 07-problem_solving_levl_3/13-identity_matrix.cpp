#include "matrixLib.hpp"

int main()
{
    int Matrix[3][3] = {{1,0,0},{0,1,0},{0,0,1}};
    // FillMatrixWithRandomNumbers(Matrix, 3, 3);
    cout << "\nMatrix: \n";
    PrintMatrix(Matrix, 3, 3);
    
    if(CheckIdentittyMatrix(Matrix, 3, 3))
    {
        cout << endl << "Matrix is identity" << endl;
    }
    else
    {
                cout << endl << "Matrix is not identity" << endl;
    }
}