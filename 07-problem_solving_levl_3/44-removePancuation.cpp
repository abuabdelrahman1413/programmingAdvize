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

string removePanctuation(string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '.' || str[i] == ',' || str[i] == '!' || str[i] == '?' || str[i] == ';' || str[i] == ':')
        {
            str.erase(i, 1);
            i--;
        }
    }
    return str;
}

int main(void) {
    string str = ReadString();
    cout << "String = " << str << endl;
    cout << "After removing panctuation = " << removePanctuation(str) << endl;
    return 0;
}