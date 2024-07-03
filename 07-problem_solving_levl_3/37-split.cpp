#include <iostream>
#include <vector>
#include <string>
using namespace std;

string ReadString()
{
	string str;
	cout << "Enter a string: ";
	getline(cin, str);
	return str;
}

vector<string> split(string str, string delim)
{
	vector<string> vSplit;
	short pos = 0;
	string word;
	while ((pos = str.find(delim)) != std::string::npos)
	{
		word = str.substr(0, pos);
		if (str != "")
		{
			vSplit.push_back(word);
		}
		str.erase(0, pos + delim.length());
	}
	if (str != "")
	{
		vSplit.push_back(str);
	}
	return vSplit;
}


int main()
{
	string str = ReadString();
	string delim = " ";
	vector<string> vString;
	vString = split(str, delim);
	cout << "Tokens: " << vString.size() << endl;
	for (string &word : vString)
	{
		cout << word << endl;
	}
	return 0;
}
