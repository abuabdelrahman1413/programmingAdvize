#include <iostream>
using namespace std;
//Rectangle Area
void Read_Numbers(float &A, float &B)
{	
        
	cout << "Please Enter A\n";
	cin >> A;
	cout << "Please Enter B\n";
	cin >> B;
	
}

float CalculateRectangleArea(float A, float B)
{
    float Area;
    Area = A * b;
    return Area;
}

void PrintResult(float Area)
{
    cout <<"The Rectangle Area is: " << Area << endl;
}

int main()
{
    float A, B;
    Read_Numbers(A,B);
    PrintResult(CalculateRectangleArea(A, B));
}