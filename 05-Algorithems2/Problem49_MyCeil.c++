#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber()
{
	float Number;
	cout << "Please enter a Number: ";
	cin >> Number;

	return Number;
}

float GetFractionPart(float Number)
{
	return Number - int(Number);
}

int MyCeil (float Number)
{
	int IntPart = int(Number);
	float FractionPart = GetFractionPart(Number);

	if(abs(FractionPart) >= .5)
	{
		if(Number > 0)
			return ++IntPart;
		else
			return IntPart;
	}
	else
	{
		if(Number > 0)
			return ++IntPart;
		else
			return IntPart;
	}
}


int main()
{
	float Number = ReadNumber();
	cout << "MyCeil: ";
	cout << MyCeil(Number);

	cout << "\nC++ Ceil: ";
	cout << ceil(Number) << endl;
}
