#include <cstddef>
#include <cstdlib>
#include <exception>
#include <iostream>
using namespace std;

enum enCharType { CapitalLetter=1, SmallLetter=2, Number=3, SpecialCharecter=4 };



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

int main()
{
	srand((unsigned) time(NULL));

	cout << GetRandomCharecter(enCharType::CapitalLetter) << endl;
	cout << GetRandomCharecter(enCharType::SmallLetter) << endl;
	cout << GetRandomCharecter(enCharType::SpecialCharecter) << endl;
	cout << GetRandomCharecter(enCharType::Number) << endl;

	return 0;
}
