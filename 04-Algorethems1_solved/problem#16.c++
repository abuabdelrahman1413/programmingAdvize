#include <iostream>
#include <math.h>
#include <string>
using  namespace std ;
//Rectangle Area With D and B;
void ReadNumbers(float &B, float &D)
{
    cout << "Please Enter D: \n";
    cin >> D;
    cout << "Please Enter B: \n";
    cin >> B;
}
float RecatngleArea(float B, float D)
{
    float Area;
    Area = B * sqrt(pow(D,2) - pow(B,2 ));
    return Area;
}
void PrintResult(float Area) { cout << "\nRectangle Area = " << Area << endl; }

int main()
{
    float B, D;
    ReadNumbers(B,D);
    PrintResult(RecatngleArea(B,D));
}
