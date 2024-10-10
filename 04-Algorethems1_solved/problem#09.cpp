#include <iostream>
using namespace std;

//Sum of 3 Numbers;
//enum enPassFail {pass=1, fail=2};
void Read_Numbers(int &num1, int &num2, int &num3)
{	
        
	cout << "Please Enter num1\n";
	cin >> num1;
	cout << "Please Enter num2\n";
	cin >> num2;
	cout << "Please Enter num3\n";
	cin >> num3;
}
int Sum3Numbers(int num1, int num2, int num3)
{
  int sum;
  sum = num1 + num2 + num3;
  return sum;
}
void PrintSum(int sum)
{
  cout << "The Summation of 3 numbers is: " << sum << endl;
}

int main()
{
  int num1, num2, num3;
  Read_Numbers(num1, num2, num3);
  PrintSum(Sum3Numbers(num1, num2, num3));
}
