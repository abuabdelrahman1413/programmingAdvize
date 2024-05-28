#include "iostream"
#include <math.h>
using namespace std;
// circle Area Desscribed in an Arbitrary Triangle | p = (a+b+c) / 2 | Area = PI *
void ReadTriangleData(float &A, float &B, float &c) {
  cout << "Please Enter A: \n";
  cin >> A;
  cout << "Please Enter B: \n";
  cin >> B;
  cout << "Please Enter c: \n";
  cin >> c;
}
float CircleAreaByATriange(float A, float B, float C) {
    float Area;
    const float PI = 3.141592653589793238;
    float P;
    P = (A+B+C) / 2;
    float T;
    T = (A*B*C) / (4 * sqrt(P * (P - A) * (P-B) * (P - C)));
    Area = PI * pow(T,2);

    return Area;
}
void PrintResult(float Area) { cout << "\nRectangle Area = " << Area << endl; }

int main() {
    float A, B, C;
    ReadTriangleData(A, B, C);
    PrintResult(CircleAreaByATriange(A, B, C));
}
