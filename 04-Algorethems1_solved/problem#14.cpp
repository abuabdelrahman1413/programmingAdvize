#include <iostream>
using namespace std;
//swap 2 numbers
void Read_Numbers(int &num1, int &num2)
{	
        
	cout << "Please Enter num1\n";
	cin >> num1;
	cout << "Please Enter num2\n";
	cin >> num2;
	
}
int Swap(int &num1, int &num2)
{
    int temp;
    
    temp =num1;
    num1 =num2;
    num2 =temp;

}


void PrintNumbers(int num1, int num2)
{
  cout << " Number1 is: " << num1<< endl;
  cout << " Number2 is: " << num2<< endl;

}

int main()
{
  int num1, num2;
  Read_Numbers(num1, num2);
  PrintNumbers(num1,num2);
  cout << "After swap"<<endl;
  Swap(num1, num2);
  PrintNumbers(num1, num2);

}
