#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct sClient
{
    string AccountNumber;
    string price;
    string Name;
    string phone;
    double AccountBalance;
};

vector<string> split(string str, string delim)
{
	vector<string> vSplit;
	short pos = 0;
	string word;
	while ((pos = str.find(delim)) != std::string::npos)
	{
		word = str.substr(0, pos);
		if (str != "")
		{
			vSplit.push_back(word);
		}
		str = str.erase(0, pos + delim.length());
	}
	if (str != "")
	{
		vSplit.push_back(word);
	}
	return vSplit;
}

sClient ConvertLineToRecord(vector <string> vRecord)
{
    sClient client;
    client.AccountNumber = vRecord[0];
    client.price = vRecord[1];
    client.Name = vRecord[2];
    client.phone = vRecord[3];
    client.AccountBalance = stod(vRecord[4]);
    return client;
}

void print(sClient client)
{
    cout << "Account Number: " << client.AccountNumber << endl;
    cout << "Price: " << client.price << endl;
    cout << "Name: " << client.Name << endl;
    cout << "Phone: " << client.phone << endl;
    cout << "Account Balance: " << client.AccountBalance << endl;
}

int main(void) {
    string str = "123#//#456#//#John#//#1234567890#//#123.45\n\n";
    
    cout << "The record is: " << str << endl;

    vector<string> vRecord = split(str, "#//#");
    ConvertLineToRecord(vRecord);

    print(ConvertLineToRecord(vRecord));
}