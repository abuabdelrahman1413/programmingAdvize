#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	vector <string> vString;
	string str = "Hello World!";
	string delim = " ";
	string word;
	while (str.find(delim) != string::npos)
	{
		word = str.substr(0, str.find(delim));
		vString.push_back(word);
		str = str.erase(0, str.find(delim) + delim.length());
	}
	
	if (str != "")
	{
		vString.push_back(str);
	}
	
	for (int i = 0; i < vString.size(); i++)
	{
		cout << vString[i] << endl;
	}
}