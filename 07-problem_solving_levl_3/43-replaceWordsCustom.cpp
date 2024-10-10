#include <iostream>
#include <string>
using namespace std;

string ReplaceWord(string str, string word, string newWord)
{
	int pos = str.find(word);
	while (pos != string::npos)
	{
		
	}
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