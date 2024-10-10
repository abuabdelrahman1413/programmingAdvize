#include <iostream>
#include <string>
#include <vector>
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

string reverseWords(string str)
{
	vector<string> vString;
	vString = split(str, " ");
	string str2;

	// declare iterator
	vector<string>::iterator it = vString.end();

	while( it != vString.begin())
	{
		--it;
		str2 += *it + " ";
	}

	return str2.substr(0, str2.length() - 1);

}

int main(void)
{
	string str = ReadString();
	cout << "\nString after reversing:\n";
	cout << reverseWords(str) << endl;
	return 0;
}
