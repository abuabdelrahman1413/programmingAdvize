#include "iostream"
using namespace std;
//Triangle Area == .5*a*h
void ReadNumbers(float &A, float &H)
{
    cout << "Please Enter A: \n";
    cin >> A;
    cout << "Please Enter H: \n";
    cin >> H;
}
float TriangleArea(float A, float H)
{
    float Area;
    Area = 0.5 * A * H;
    return Area;
}
void PrintResult(float Area) { cout << "\nTriangle Area = " << Area << endl; }

int main()
{
    float A, H;
    ReadNumbers(A,H);
    PrintResult(TriangleArea(A,H));
}
