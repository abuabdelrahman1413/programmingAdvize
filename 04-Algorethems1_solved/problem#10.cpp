#include <iostream>
using namespace std;

//Average of 3 Numbers;
//enum enPassFail {pass=1, fail=2};
void Read_Marks(int &mark1, int &mark2, int &mark3)
{	
        
	cout << "Please Enter mark1\n";
	cin >> mark1;
	cout << "Please Enter mark2\n";
	cin >> mark2;
	cout << "Please Enter mark3\n";
	cin >> mark3;
}
int Sum3Numbers(int mark1, int mark2, int mark3)
{
  int sum;
  sum = mark1 + mark2 + mark3;
  return sum;
}
float CalculateAverage(int sum)
{
  return (float)sum/3;
}
void PrintAverage(float average)
{
  cout << "The Average of 3 numbers is: " << average<< endl;
}

int main()
{
  int mark1, mark2, mark3;
  Read_Marks(mark3, mark2, mark3);
  PrintAverage(CalculateAverage(Sum3Numbers(mark1, mark2, mark3)));
}
