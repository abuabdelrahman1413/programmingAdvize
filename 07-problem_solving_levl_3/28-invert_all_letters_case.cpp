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

char invertChar(char Char)
{
  return isupper(Char) ? tolower(Char) : toupper(Char);
}

string invertString(string str)
{
  for(short i = 0; i < str.length(); i++)
  {
    str[i] = invertChar(str[i]);
  }

  return str;
}

int main()
{
  string str = ReadString();
  cout << "\nString after inverted:\n";
  str = invertString(str);
  cout << str << endl;

  return 0;
}