#include <iostream>
#include <string>
using namespace std;

string ReadString()
{
	string str;
	cout << "Enter a string: ";
	getline(cin, str);
	return str;
}

string upperString(string str)
{
	for(short i = 0; i < str.length(); i++)
	{
		str[i] = toupper(str[i]);
	}
	return str;
}

string lowerString(string str)
{
	for(short i = 0; i < str.length(); i++)
	{
		str[i] = tolower(str[i]);
	}
	return str;
}


int main()
{
	string str = ReadString();
	cout << "\nString after Upper:\n";
	str = upperString(str);
	cout << str << endl;

	cout << "\nString after lowe:\n";
	str = lowerString(str);
	cout << str << endl;
	return 0;
}
