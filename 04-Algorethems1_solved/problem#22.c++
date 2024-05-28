#include "iostream"
#include <math.h>
using namespace std;
// circle Area Inscribed in an Isosceles Triangle | Area = ((PI*b*b)/4)) *
// ((2*a-b)/((2*a+b)));
void ReadTriangleData(float &A, float &B) {
  cout << "Please Enter A: \n";
  cin >> A;
  cout << "Please Enter B: \n";
  cin >> B;
}
float CircleAreaByTriange(float A, float B) {
    float Area;
    const float PI = 3.141592653589793238;
    Area = ((PI*B*B)/4) * ((2*A-B)/((2*A+B)));
    return Area;
}
void PrintResult(float Area) { cout << "\nRectangle Area = " << Area << endl; }

int main() {
    float A, B;
    ReadTriangleData(A, B);
    PrintResult(CircleAreaByTriange(A, B));
}
