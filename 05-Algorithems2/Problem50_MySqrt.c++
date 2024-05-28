#include <iostream>
#include <cmath>
#include <ratio>
using namespace std;

float ReadNumber()
{
	float Number;
	cout << "Please enter a Number: ";
	cin >> Number;

	return Number;
}

float  MySqrt(float Number)
{
	return pow(Number, 0.5);
}

int main()
{
	float Number = ReadNumber();

	cout << "MySqrt: ";
	cout << MySqrt(Number);

	cout << "\nC++ sqrt: ";
	cout << sqrt(Number) << endl;
}
