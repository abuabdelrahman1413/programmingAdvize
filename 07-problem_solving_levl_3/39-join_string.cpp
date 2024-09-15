#include <iostream>
#include <string>
#include <vector>
using namespace std;


string joinString(vector<string> vString, string delim)
{
	string str;
	for(string &word : vString)
	{
		str = str + word + delim;
	}
	return str.substr(0, str.length() - delim.length());  // to avoid last delimiter

}

int main(void)
{
	vector<string> vString = {"Mohammed", "AbuHadhood", "Software", "enginer"};
	cout << "\nVector after join: \n";
	cout << joinString(vString, "###");

	return (0);
}
