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

string lowerFirstLetterForEachWorld(string str)
{
	bool isFirstLetter = true;
	for(short i = 0; i < str.length(); i++)
	{
		if(str[i] != ' ' && isFirstLetter)
			str[i] = tolower(str[i]);
		isFirstLetter = (str[i] == ' ' ? true : false);
	}
	return str;
}

int main()
{
	string str = ReadString();
	cout << "\nString after conversion:\n";
	str = lowerFirstLetterForEachWorld(str);
	cout << str << endl;
	return 0;
}
