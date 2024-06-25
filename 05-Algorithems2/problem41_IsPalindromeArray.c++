#include <cstddef>
#include <cstdlib>
#include <exception>
#include <iostream>
#include <string>
using namespace std;


int ReadPositiveNumber(string Mesaage)
{
    int Number;
    cout <<Mesaage;
    cin>>Number;
	cout << endl;
    return Number;
}

int RandomNumber (int From, int To)
{
	return (rand()%(To - From +1) + From);
}

void ReadArray(int Array[100], int &LengthOfArray)
{
	LengthOfArray = ReadPositiveNumber("Enter LengthOfArray: ");
	for (int i = 0; i <= LengthOfArray -1; i++)
	{
		cout << "\nPlease Enter Element["<<i+1<<"]: ";
		cin >> Array[i];
	}
}



void PrintArray (int Array[100], int LengthOfArray)
{
	for(int i = 0; i <= LengthOfArray -1; i++)
	{
		cout << Array[i] << " ";
	}
	cout << "\n";
}

bool IsPalindrome(int Array[100],int LengthOfArray)
{
	for (int i=0; i <= LengthOfArray-1; i++)
	{
		if (Array[i] != Array[LengthOfArray -i -1])
			return false;
	}
	return true;
}

int main()
{
	srand ((unsigned) time (NULL));
	int Array[100];
	int LengthOfArray;

	ReadArray(Array, LengthOfArray);

	cout << "Array Elements: ";
	PrintArray(Array, LengthOfArray);

	
	if(IsPalindrome(Array, LengthOfArray))
		cout << "\nYes it's Palindrome.";
	else
		cout << "\nNo it's not palindrome.\n";
	return 0;

}
