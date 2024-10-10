#include <iostream>
using namespace std;

//Half Number;
enum enPassFail {pass=1, fail=2};
int Read_Number()
{	
	int Number;
	cout << "Please Enter a Mark\n";
	cin >> Number;
	return Number;

}
enPassFail Check_Mark(int Mark)
{
  if (Mark < 50)
    return enPassFail::fail;
  else
    return enPassFail::pass;
}
void PrintResult(int Mark)
{
  if (Check_Mark(Mark) == enPassFail::pass)
    cout << "\nYou pass\n";
  else
    cout << "\nYou Fail\n";
}

int main()
{
  PrintResult(Read_Number());
}


