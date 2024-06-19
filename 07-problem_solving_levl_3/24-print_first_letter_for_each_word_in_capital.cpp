#include <cctype>
#include <iostream>
#include <iterator>
#include <string>
using namespace std;

string ReadString()
{
	string str;
	cout << "Enter a string: ";
	getline(cin, str);
	return str;
}

void firstLetterInCapital(string str)
{
	bool isFirstLetter = true;
		cout << "\nFirst Letters of words in capital are:\n";
	for(short i = 0; i < str.length(); i++)
	{
			if(str[i] != ' ' && isFirstLetter)
			{
				cout << (char)toupper(str[i]) << endl;
			}

			isFirstLetter = (str[i] == ' ' ? true : false);
		}
}

int main()
{
	firstLetterInCapital(ReadString());
	return 0;
}
