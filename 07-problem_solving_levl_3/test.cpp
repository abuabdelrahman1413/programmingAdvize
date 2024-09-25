#include <iostream>
#include <vector>
#include <string>
using namespace std;

string ReadString(string messages = "")
{
	string str;
	cout << "\nPleae Enter a string: ";
	getline(cin, str);
	return str;
}

vector<string> SplitString(string str)
{
	string delim = " ";
	short Pos = 0;
	string word ;
	vector<string> vWords;
	while ((Pos = str.find(delim)) != std::string::npos)
	{
		word = str.substr(0, Pos);
		if (word != " ")
		{
			vWords.push_back(word);
		}
		
		str = str.erase(0, Pos + delim.length());
	}
	
	if (str != "")
	{
		vWords.push_back(word);
	}
	return vWords;
	
}

void PrintVector(vector<string> &vWords)
{
	for (string &word : vWords)
	{
		cout << word << endl;
	}
}

int main(void)
{
	vector<string>vWords = SplitString(ReadString());
	PrintVector(vWords);
}