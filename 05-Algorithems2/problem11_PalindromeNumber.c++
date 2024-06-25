/* #include <iostream> */
/* using namespace std; */

/* int ReadPositiveNumber(string Mesaage) */
/* { */
/*     int Number; */
/*     cout <<Mesaage; */
/*     cin>>Number; */
/* 	cout << endl; */
/*     return Number; */
/* } */

/* int ReverseNumber(int Number) */
/* { */
/* 	int Reminder = 0; */
/* 	int reverse = 0; */
/* 	while (Number != 0) */
/* 	{ */
/* 		Reminder = Number % 10; */
/* 		reverse = (reverse * 10) + Reminder; */
/* 		Number /= 10; */
/* 	} */

/* 	return reverse; */
/* } */

/* void CheckPalidromeNumber(int Number, int Reverse) */
/* { */
/* 	if (Number == Reverse) */
/* 		cout << "Yes it's a palindrome Number.\n"; */
/* 	else */
/* 		cout << "Not it's not palindrome Number\n"; */
/* } */

/* int main() */
/* { */
/* 	int Number, Reverse; */
/* 	Number = ReadPositiveNumber("Please Enter a Number: "); */
/* 	Reverse = ReverseNumber(Number); */

/* 	CheckPalidromeNumber(Reverse, Number); */

#include <iostream>
using namespace std;

int ReadPositiveNumber(string Mesaage)
{
    int Number;
    cout <<Mesaage;
    cin>>Number;
	cout << endl;
    return Number;
}

int ReverseNumber(int Number)
{
	int Reminder = 0;
	int reverse = 0;
	while (Number != 0)
	{
		Reminder = Number % 10;
		reverse = (reverse * 10) + Reminder;
		Number /= 10;
	}

	return reverse;
}

bool IsPalindromeNumber(int Number)
{
	return Number == ReverseNumber(Number);
}

int main()
{
	if(IsPalindromeNumber(ReadPositiveNumber("Please Enter a Number: ")))
	{
		cout << "Yes it's a palindrome Number\n";
	}

	else
	{
		cout << "No it's not palindrome Number\n";
	}
}
