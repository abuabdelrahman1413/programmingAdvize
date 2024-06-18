#include <iostream>
using namespace std;
void PrintFibUsingRecursion(int n, int prev1, int prev2)
{
	int FibNumber = 0;
	if(n>0)
	{
		FibNumber = prev1 + prev2;
		prev2 = prev1;
		prev1 = FibNumber;
		cout << FibNumber << " ";
		PrintFibUsingRecursion(n-1, prev1, prev2);
	}
}

int main()
{
	PrintFibUsingRecursion(10, 0, 1);
}
