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

int MyRound (float Number)
{
	int IntPart = int(Number);
	float FractionPart = GetFractionPart(Number);

	if(abs(FractionPart) >= .5)
	{
		if(Number > 0)
			return ++IntPart;
		else
			return --IntPart;
	}
	else
		return IntPart;
}


int main()
{
	float Number = ReadNumber();
	cout << "MyRound: ";
	cout << MyRound(Number);

	cout << "\nC++ Round: ";
	cout << round(Number) << endl;
}
