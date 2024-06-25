#include "iostream"
#include <math.h>
using namespace std;
//circle Area
float ReadRadious()
{   float R;
    cout << "Please Enter R: \n";
    cin >> R;
    return R;
}
float CircleArea(float R)
{
    float Area;
    const float PI = 3.141592653589793238;
    Area = powf(R,2 ) * PI;
    return Area;
}
void PrintResult(float Area) { cout << "\nCircle Area = " << Area << endl; }

int main()
{
    PrintResult(CircleArea(ReadRadious()));
}
