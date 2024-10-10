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

bool isVowel(char element)
{
  char vowelArr[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
  for (short i = 0; i < 10; i++)
  {
    if (vowelArr[i] == toupper(element) || tolower(element) == vowelArr[i])
      return true;
  }
  return false;
}

int main()
{
  char ch = 'a';
  cout << "\n Please enter a char: ";
  cin >> ch;
  cout << "\n Is " << ch << " vowel: " << isVowel(ch);
  return 0;
}