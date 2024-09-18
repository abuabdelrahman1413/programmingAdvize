#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

struct sClient
{
    string AccountNumber;
    string pin;
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
    cout << "Enter Account Number: ";
    cin.ignore();  // Ignoring leftover whitespaces or newlines
    getline(cin, client.AccountNumber);
    
    cout << "Enter Pin: ";
    getline(cin, client.pin);
    
    cout << "Enter Name: ";
    getline(cin, client.Name);
    
    cout << "Enter Phone: ";
    getline(cin, client.phone);
    
    cout << "Enter Account Balance: ";
    string balanceStr;
    getline(cin, balanceStr);
    client.AccountBalance = stod(balanceStr);
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
    vString.push_back(client.pin);
    vString.push_back(client.Name);
    vString.push_back(client.phone);
    vString.push_back(to_string(client.AccountBalance));
    return joinString(vString, "#//#");
}

void AddDataToFile(string file, string line)
{
    fstream myFile;
    myFile.open(file, ios::out | ios::app); // write mode

    if (myFile.is_open())
    {
        myFile << line;
        myFile << "\n";
        myFile.close();
    }
}

void AddNewClient()
{
    string file = "clients.txt";
    sClient Client;
    Client = ReadNewClient();
    AddDataToFile(file, ConvertClientToLine(Client));
}

void AddClients()
{
    char AddMore = 'Y';

    do
    {
        system("clear");  // For Unix-based systems, clear the console
        cout << "Adding New Clients:\n\n";

        AddNewClient();

        cout << "\nClient Added successfully, do you want to add more clients? (Y/N): ";
        cin >> AddMore;
    } while (toupper(AddMore) == 'Y');
}

int main()
{
    AddClients();
    return 0;
}
