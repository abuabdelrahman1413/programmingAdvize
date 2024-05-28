#include "iostream"
#include <math.h>
using namespace std;
//circle Area Along The Circumference | Area = l^2 / PI * 4;
float ReadCircumference()
{   float L;
    cout << "Please Enter Circumference L : \n";
    cin >> L;
    return L;
}
float CircleAreaByCircumference(float L)
{
    float Area;
    const float PI = 3.141592653589793238;
    Area = powf(L,2 )  / (PI * 4);
    return Area;
}
void PrintResult(float Area) { cout << "\nCircle Area = " << Area << endl; }

int main()
{
    PrintResult(CircleAreaByCircumference(ReadCircumference()));
}
