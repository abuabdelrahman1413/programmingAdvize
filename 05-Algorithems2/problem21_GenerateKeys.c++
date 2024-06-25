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

void GenerateKeys (int Number)
{
	for (int i = 1; i <= Number; i++)
	{
		cout << "Key[" << i << "]: ";
		for(int i = 1; i <=4; i++)
		{	
			for (int j = 1; j <= 4; j++)
			{	
				cout<< GetRandomCharecter(enCharType::CapitalLetter);
			}

			if ( i != 4)
			{
				cout << "-";
			}
		}

		cout << endl;
	}
}

int main()
{
	srand ((unsigned) time (NULL));
	int Number = ReadPositiveNumber("Please Enter Number of Keys: ");
	GenerateKeys( Number);

	return 0;
}
