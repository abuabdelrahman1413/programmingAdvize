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

string trimLeft(string str)
{
	for(int i = 0; i < str.length(); i++)
	{
		if(str[i] != '.')
		{
			return str.substr(i, str.length() - i);
		}
	}
	return "";
}

string trimRight(string str)
{
	for(int i = str.length() - 1; i >= 0; i--)
	{
		if(str[i] != '.')
		{
			return str.substr(0, i + 1);
		}
	}
	return str;
}

string trim(string str)
{
	return trimLeft(trimRight(str));
}

int main()
{
	string str = ".....Mohammed Arwa.....";
	cout << "\nString     = " << str;
	cout << "\n\nTrim Left = " << trimLeft(str);
	cout << "\nTrim Right = " << trimRight(str);
	cout << "\nTrim Both =     " << trim(str);
	return 0;
}
