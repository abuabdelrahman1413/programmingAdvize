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

string ReadString(string msg)
{
    string str;
    cout << msg;
    getline(cin, str);
    return str;
}

sClient ReadNewClient()
{
    sClient client;
    client.AccountNumber = ReadString("Enter Account Number: ");
    client.price = ReadString("Enter Price: ");
    client.Name = ReadString("Enter Name: ");
    client.phone = ReadString("Enter Phone: ");
    client.AccountBalance = stod(ReadString("Enter Account Balance: "));
    return client;
}

string joinString(vector<string> vString, string delim)
{
    string str;
    for (string &word : vString)
    {
        str = str + word + delim;
    }
    return str.substr(0, str.length() - delim.length()); // to avoid last delimiter
}

string ConvertClientToLine(sClient client)
{
    vector<string> vString;
    vString.push_back(client.AccountNumber);
    vString.push_back(client.price);
    vString.push_back(client.Name);
    vString.push_back(client.phone);
    vString.push_back(to_string(client.AccountBalance));
    return joinString(vString, "#//#");
}
int main(void)
{
    cout << "\nPlease Enter the Client Details\n\n";
    sClient client;
    client = ReadNewClient();
    cout << "\n\nclient record to save is: \n";
    cout << ConvertClientToLine(client) << endl;
    return (0);
}