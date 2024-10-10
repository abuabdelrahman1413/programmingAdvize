#include <iostream>
#include <string>
#include <vector>
using namespace std;

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
		str = str.erase(0, pos + delim.length());
	}
	if (str != "")
	{
		vSplit.push_back(word);
	}
	return vSplit;
}

string joinString(vector<string> vString, string delim){
	string str;
	for(string &word : vString){
		str = str + word + delim;
	}

	return str.substr(0, str.length() - delim.length());
}

string ReplaceWord(string str, string word, string newWord)
{
	vector<string> vString = split(str, " ");
	for (string &s : vString)
	{
		if (s == word)
		{
			s = newWord;
		}
	}
	
	return joinString(vString, " ");

}

int main(void)
{
	string str = "I love Egypt and Egypt is my country";
	string word = "Egypt";
	string newWord = "Sudan";
	str = ReplaceWord(str, word, newWord);
	cout << str << endl;
	return 0;
}
