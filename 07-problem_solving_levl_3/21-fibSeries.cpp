#include <iostream>
using namespace std;

void PrintFibSeries(int n)
{
	int FibNumber = 0;
	int prev2 = 0;
	int prev1 = 1;
	cout << "1  ";
	for(int i = 2; i <= n; i++)
	{
		FibNumber = prev1 + prev2;
		cout << FibNumber << " ";
		prev2 = prev1;
		prev1 = FibNumber;
	}
}

int main()
{
	PrintFibSeries(10);
}
