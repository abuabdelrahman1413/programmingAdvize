#include <cstddef>
#include <cstdlib>
#include <exception>
#include <iostream>
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

void GenerateKeys(int NumberOfKeys)
{
	for(int i = 1; i <= NumberOfKeys; i++)
	{
		cout <<"Key [" << i << "] :";
		cout << GenerateKey() << endl;
	}
}



int main()
{
	srand ((unsigned) time (NULL));

	GenerateKeys(ReadPositiveNumber("Please Enter Number of Keys: "));
	return 0;
}
