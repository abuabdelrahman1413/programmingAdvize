#include <cstddef>
#include <cstdlib>
#include <exception>
#include <iostream>
#include <string>
using namespace std;

enum enCharType { CapitalLetter=1, SmallLetter=2, Number=3, SpecialCharecter=4 };

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

char GetRandomCharecter(enCharType CharType)
{

	switch (CharType)
	{
		case enCharType::CapitalLetter:
			return (char) RandomNumber(65, 90);
		case enCharType::SmallLetter:
			return (char) RandomNumber(97, 122);
		case enCharType::Number:
			return (char) RandomNumber(48, 57);
		case enCharType::SpecialCharecter:
			return (char) RandomNumber(33, 47);
		default:
			return '\n';
			break;
	}
}

string GenerateWord(enCharType CharType, int Length)
{
	string Word = "";
	for (int i = 1; i<=Length; i++)
		Word += GetRandomCharecter(CharType);
	return Word;
}

string GenerateKey ()
{
	string Key = "";
	Key += GenerateWord(enCharType::CapitalLetter,4) + "-";
	Key += GenerateWord(enCharType::CapitalLetter,4) + "-";
	Key += GenerateWord(enCharType::CapitalLetter,4) + "-";
	Key += GenerateWord(enCharType::CapitalLetter,4) ;

	return Key;

}

void FillArrayWithString(string Array[100], int &LengthOfArray)
{
	LengthOfArray = ReadPositiveNumber("Please Enter Length of Array: ");

	for(int i = 0; i <= LengthOfArray - 1; i++)
	{
		Array[i] = GenerateKey();
	}
}

void PrintArrayOfString(string Array[100], int LengthOfArray)
{
	for(int i = 0; i <= LengthOfArray -1; i++)
	{
		cout<<"Array[" << i+1 <<"] : "; 
		cout << Array[i] << "\n";
	}
	cout << "\n";
}

int main()
{
	srand ((unsigned) time (NULL));
	string Array[100];
	int LengthOfArray;

	FillArrayWithString(Array, LengthOfArray);

	PrintArrayOfString(Array, LengthOfArray);
	return 0;

}
