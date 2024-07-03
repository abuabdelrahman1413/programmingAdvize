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
int countWordsInString(string str)
{
	short count = 0;
	short pos = 0;
	string delim = " ";
	string word;
	while ((pos = str.find(delim)) != std::string::npos)
	{
		word = str.substr(0, pos);
		if (str != "")
		{
			count ++;
		}
		str = str.erase(0, pos + delim.length());
	}
	if (str != "")
	{
		count ++;
	}
	return count;
}

int main()
{
	cout << countWordsInString(ReadString()); 
}
