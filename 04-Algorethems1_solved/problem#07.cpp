#include <iostream>
using namespace std;

//Half Number;

int Read_Number()
{	
	int Number;
	cout << "Please Enter a number\n";
	cin >> Number;
	return Number;

}
float Calculate_Half_Number (int Number)
{
	return (float) Number/2;
}

void Print_Result(int Num)
{
	string Result = "Half of "+to_string(Num)+" is "+to_string(Calculate_Half_Number(Num));
	cout << Result <<endl;
}
int main ()
{
	Print_Result(Read_Number());
}
