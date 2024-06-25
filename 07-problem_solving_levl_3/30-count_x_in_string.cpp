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

short countXInString(string str, char x)
{
  int count = 0;
  for (size_t i = 0; i < str.length(); i++)
  {
    if (str[i] == x)
      count++;
     
  }
  return count;
  
}

int main()
{
  cout << "\n Please enter a string: ";
  string str = ReadString();
  cout << "\n Please enter a character: ";
  char x;
  cin >> x;
  cout << "\n Number of " << x << " in string: " << countXInString(str, x);
  return 0;
}