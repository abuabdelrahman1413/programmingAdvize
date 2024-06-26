#include<iostream>
#include<string>
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
 * Prints each character of the given string on a new line.
 *
 * @param str The string to print.
 *
 * @return None.
 *
 * @throws None.
 */
// void printEachWordInstring(string str)


void printEachWordInstring(string str)
{
	string delm = " ";
	short pos = 0;
	string word;
	while ((pos = str.find(delm)) != std::string::npos)
	{
		word = str.substr(0, pos);
		if (word != " ")
		{
			cout << word << endl;
		}

		str = str.erase(0, pos + delm .length());
	}
	if (str != "")
	{
		cout << str << endl;
	}

}

/**
+ * Executes the main function, calling printEachWordInstring with the string read from standard input.
+ *
+ * @param None
+ *
+ * @return 0 on exit
+ *
+ * @throws None
+ */
int main()
{
	printEachWordInstring(ReadString());
}
