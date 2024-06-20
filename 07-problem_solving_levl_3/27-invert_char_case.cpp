#include <iostream>
#include <string>

using namespace std;

char ReadChar()
{
	char Char;
	cout << "Enter a char: ";
	cin >> Char;
	return Char;
}

char invertChar(char Char)
{
  return isupper(Char) ? tolower(Char) : toupper(Char);
}

int main()
{
  char ch1 = ReadChar();
  cout << "\nChar after inverted:\n";
  ch1 = invertChar(ch1);
  cout << ch1 << endl;

  return 0;
}