#include <iostream>
using namespace std;

string ReadPassword(string Mesaage)
{
	string Password;
	cout << Mesaage ;
	cin >> Password;
    cout << endl;
	return Password;
}


bool GuessPassword(string OriginalPassword)
{
	string word ="";
	int counter = 0;
	for (char i = 65; i <= 90; i++)
	{
		for (char j = 65; j <= 90; j++)
		{
			for (char k =65; k <= 90; k++)
			{
				counter ++;
				word += i;
				word += j;
				word += k;
				
				cout << "Trial [" << counter<< "] : " << word << endl;

				if(word == OriginalPassword)
				{
					cout <<"\nPassword is " << word << "\n";
					cout << "Found after " << counter << " Trail(s)\n";

					return true;
				}

				word ="";
			}
		}


	}
	return false;
}

int main()
{
	GuessPassword(ReadPassword("Please enter password: "));
}
