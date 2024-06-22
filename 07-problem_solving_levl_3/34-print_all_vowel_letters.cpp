#include <iostream>
#include <string>

using namespace std;

/**
 * Reads a string from the standard input.
 *
 * @return the string entered by the user
 *
 * @throws None
 */
string ReadString()
{
	string str;
	cout << "Enter a string: ";
	getline(cin, str);
	return str;
}

/**
 * Checks if the given character is a vowel.
 *
 * @param element The character to check.
 *
 * @return True if the character is a vowel, false otherwise.
 *
 * @throws None
 */
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

/**
 * Prints all the vowels in the given string.
 *
 * @param str The string to check.
 *
 * @throws None
 */
void PrintVowel(string str)
{
  for(short i = 0; i < str.length(); i++)
  {
    if(isVowel(str[i]))
    {
      cout << str[i] << " ";
    }
  }
}

/**
 * Main function
 * 
 * @param argc
 * @param argv
 * 
 * @return 0 on exit
 */
int main(int argc, char *argv[])
{
  cout << "Enter a string: ";
  
  PrintVowel(ReadString());
  return 0;
}