#include <iostream>
using namespace std;
//print large number
void Read_Numbers(int &num1, int &num2)
{	
        
	cout << "Please Enter num1\n";
	cin >> num1;
	cout << "Please Enter num2\n";
	cin >> num2;
	
}
int Max_Numper(int num1, int num2)
{
  if (num1 > num2)
    return num1;
   else 
    return num2;
}


void PrintResult(int max)
{
  cout << "The Large Number is: " << max<< endl;
}

int main()
{
  int num1, num2;
  Read_Numbers(num1, num2);
  PrintResult(Max_Numper(num1,num2));
}
