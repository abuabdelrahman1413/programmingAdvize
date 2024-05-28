#include "iostream"
#include <math.h>
using namespace std;
//circle Area Inscribed in a square | Area = (PI * A^2) / 4;
float ReadSqaureSide()
{   float A;
    cout << "Please Enter Square Side A : \n";
    cin >> A;
    return A;
}
float CircleAreaInscribedInSquare(float A)
{
    float Area;
    const float PI = 3.141592653589793238;
    Area = (powf(A,2 ) * PI) / 4;
    return Area;
}
void PrintResult(float Area) { cout << "\nCircle Area = " << Area << endl; }

int main()
{
    PrintResult(CircleAreaInscribedInSquare(ReadSqaureSide()));
}
