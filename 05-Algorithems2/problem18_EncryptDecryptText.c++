#include <cstdlib>
#include <iostream>
#include <string>
#include <random>
using namespace std;

string ReadText(string Mesaage)
{
	string Text ;
	cout << Mesaage ;
	getline(cin, Text);
    cout << endl;
	return Text;
}

string EncryptedText(string Text, short EncryptionKey)
{
	for(int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int) Text[i] + EncryptionKey);
	}

	return Text;
}

string DecryptedText (string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char ((int)Text[i] - EncryptionKey);
	}

	return Text;
}

int main()
{
	short EncryptionKey = rand()%10;
	string TextBeforeEncryption = ReadText("Please Enter a Text: ");
	string TextAfterEncryption = EncryptedText(TextBeforeEncryption, EncryptionKey);
	string TextAfterDecryption = DecryptedText(TextAfterEncryption, EncryptionKey);

	cout << "\nText Before Encryption: " << TextBeforeEncryption << endl;
	cout << "Text after Encryption: " << TextAfterEncryption << endl;
	cout << "Text after Decryption: " << TextAfterDecryption << endl;

	return 0;
}



