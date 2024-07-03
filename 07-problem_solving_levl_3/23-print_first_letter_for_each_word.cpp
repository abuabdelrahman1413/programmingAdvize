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

void firstLetter(string str)
{
	bool isFirstLetter = true;
		cout << "\nFirst Letters of words are:\n";
	for(short i = 0; i < str.length(); i++)
	{
			if(str[i] != ' ' && isFirstLetter)
			{
				cout << str[i] << endl;
			}

			isFirstLetter = (str[i] == ' ' ? true : false);
	}
}

int main()
{
	firstLetter(ReadString());
	return 0;
}
