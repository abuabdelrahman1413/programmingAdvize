#include "iostream"
#include <math.h>
using namespace std;
//circle Area By Diameter == (PI * D^2)4
float ReadDiameter()
{   float D;
    cout << "Please Enter D: \n";
    cin >> D;
    return D;
}
float CircleAreaByDiameter(float D)
{
    float Area;
    const float PI = 3.141592653589793238;
    Area = (powf(D,2 ) * PI) / 4;
    return Area;
}
void PrintResult(float Area) { cout << "\nCircle Area = " << Area << endl; }

int main()
{
    PrintResult(CircleAreaByDiameter(ReadDiameter()));
}
