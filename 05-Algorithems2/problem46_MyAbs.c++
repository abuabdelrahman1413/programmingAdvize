#include <iostream>
#include <cmath>
using namespace std;

int ReadNumber()
{
	int Number;
	cout << "Please enter a Nuber: ";
	cin >> Number;

	return Number;
}

int MyAbs(int Number)
{

	if(Number > 0)
		return Number;
	else if (Number == 0)
		return 0;
	else
		return Number*-1;
}

int main()
{
	int Number = ReadNumber();

	cout << "MyAbs Result: ";
	cout << MyAbs(Number);
	cout << endl;

	cout << "C++ abs Result: ";
	cout << abs(Number) << endl;

}
