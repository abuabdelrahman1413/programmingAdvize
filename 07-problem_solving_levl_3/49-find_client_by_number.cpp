#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

const string ClientsFileName = "clients.txt";

struct sClient
{
    string AccountNumber;
    string pin;
    string Name;
    string phone;
    double AccountBalance;
};

vector<string> SplitString(string str, string sep)
{
    vector<string> vString;
    short pos = 0;
    string word = "";
    while ((pos = str.find(sep)) != std::string::npos)
    {
        word = str.substr(0, pos);
        if (word != "")
        {
            vString.push_back(word);
        }

        str.erase(0, pos + sep.length());
    }

    if (str != "")
    {
        vString.push_back(str);
    }
    return vString;
}

sClient ConvertLineToRecord(string Line, string Sperator = "#//#")
{
    sClient Clinet;
    vector<string> vClinetData;
    vClinetData = SplitString(Line, Sperator);
    Clinet.AccountNumber = vClinetData[0];
    Clinet.pin = vClinetData[1];
    Clinet.Name = vClinetData[2];
    Clinet.phone = vClinetData[3];
    Clinet.AccountBalance = stod(vClinetData[4]);

    return Clinet;
}

vector<sClient> LoadClientsDataFromFile(string FileName)
{
    vector<sClient> vClients;
    fstream MyFile;
    MyFile.open(FileName, ios::in); // read mode

    if (MyFile.is_open())
    {
        string Line;
        sClient Client;

        while (getline(MyFile, Line))
        {
            Client = ConvertLineToRecord(Line);
            vClients.push_back(Client);
        }
        MyFile.close();
    }
    return vClients;
}

void print(sClient client)
{
    cout << "Account Number: " << client.AccountNumber << endl;
    cout << "Price: " << client.pin << endl;
    cout << "Name: " << client.Name << endl;
    cout << "Phone: " << client.phone << endl;
    cout << "Account Balance: " << client.AccountBalance << endl;
}

string ReadClientNumber()
{
    string ClientNum;
    cout << "Enter Client Number: ";
    cin >> ClientNum;
    return ClientNum;
}

bool FindClientByNum(vector<sClient> vClients, string ClientNum)
{
    for (sClient Client : vClients)
    {
        if (Client.AccountNumber == ClientNum)
        {
            return true;
        }
    }
    return false;
}

int main(void)
{
    sClient Client;
    string AccountNumber = ReadClientNumber();

    if (FindClientByNum(LoadClientsDataFromFile(ClientsFileName), AccountNumber))
    {
        print(Client);
    }
    else
    {
        cout << "Not Found";
    }
}