#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

const string ClientsFileName = "clients.txt";

struct sClient
{
    string AccountNumber;
    string pin;
    string Name;
    string phone;
    double AccountBalance;
    bool MarkForDelete = false;
};

string ReadClientNumber()
{
    string ClientNum;
    cout << "Enter Client Number: ";
    cin >> ClientNum;
    return ClientNum;
}

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

bool FindClientByNum(vector<sClient> vClients, string ClientNum, sClient &Client)
{
    for (sClient client : vClients)
    {
        if (client.AccountNumber == ClientNum)
        {
            Client = client;
            return true;
        }
    }
    return false;
}

bool MarkClientForDeleteByAccountNumber(vector<sClient> &vClients, string AccountNumber)
{
    for (sClient &Clinet: vClients)
    {
        if (Clinet.AccountNumber == AccountNumber)
        {
            Clinet.MarkForDelete = true;
            return true;
        }
    }
    return false;
}

string joinString(vector<string> vString, string delim) {
	string str;
	for(string &word : vString){
		str = str + word + delim;
	}

	return str.substr(0, str.length() - delim.length());
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

vector <sClient> SaveClientsDataToFile(vector<sClient> vClients, string FileName)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out); // write mode
    string DataLine;
    if (MyFile.is_open())
    {
        for (sClient Client : vClients)
        {
            if (Client.MarkForDelete == false)
            {
                DataLine = ConvertClientToLine(Client);
                MyFile << DataLine << endl;
            }
        }
        MyFile.close();
    }
    return vClients;
}

bool DeleteClientByAccountNumber(vector<sClient> &vClients, string AccountNumber)
{
    sClient Client;
    char Answer = 'n';
    if (FindClientByNum(vClients, AccountNumber, Client))
    {
        print(Client);
        cout << "\n\nAre you sure you want to delete this client? (y/n): ";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            MarkClientForDeleteByAccountNumber(vClients, AccountNumber);
            SaveClientsDataToFile(vClients, ClientsFileName);

            // Refresh the vector after delete
            vClients = LoadClientsDataFromFile(ClientsFileName);
            cout << "\n\nClient deleted successfully!";
            return true;
        }
    }
    else
    {
        cout << "\n\nClient not found!";
        return false;
    }
}


int main(void)
{
    vector <sClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientNumber();

    DeleteClientByAccountNumber(vClients, AccountNumber);

    return 0;
}