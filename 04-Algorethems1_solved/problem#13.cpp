#include <iostream>
using namespace std;
//print large number of three numbers
void Read_Numbers(int &num1, int &num2, int &num3)
{	
        
	cout << "Please Enter num1\n";
	cin >> num1;
	cout << "Please Enter num2\n";
	cin >> num2;
	cin >> num3;
	
}
int Max_Numper(int num1, int num2, int num3)
{
  if (num1 > num2 && num1 > num3)
    return num1;
   else  if (num2 > num1 && num2 > num3)
        return num2;
else if (num3 > num1 && num3 > num2)
    return num3;
}


void PrintResult(int max)
{
  cout << "The Large Number is: " << max<< endl;
}

int main()
{
  int num1, num2 , num3;
  Read_Numbers(num1, num2, num3);
  PrintResult(Max_Numper(num1,num2, num3));
}
