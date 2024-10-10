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

void PrintClientRecord(sClient Client)
{
    cout << "| " << left << setw(15) << Client.AccountNumber;
    cout << "| " << left << setw(10) << Client.pin;
    cout << "| " << left << setw(48) << Client.Name;
    cout << "| " << left << setw(12) << Client.phone;
    cout << "| " << left << setw(12) << Client.AccountBalance;
}

void PrintAllClientsData(vector<sClient> vClients)
{
    cout << "\n\t\t\t\t\tClient List(" << vClients.size() << ") Client(s).";
    cout << "\n___________________________________________________________";
    cout << "________________________________________________\n"
         << endl;

    cout << "| " << left << setw(15) << "Account Number";
    cout << "| " << left << setw(10) << "Pin Code";
    cout << "| " << left << setw(48) << "Client Name";
    cout << "| " << left << setw(12) << "Phone";
    cout << "| " << left << setw(12) << "Balance";

    cout << "\n_________________________________________________\n";
    cout << "_____________________________________________________\n\n";
    for (sClient Client : vClients)
    {
        PrintClientRecord(Client);
        cout << endl;
    }

    cout << "\n_________________________________________________\n";
    cout << "_____________________________________________________\n\n";
}
int main(void)
{
    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    PrintAllClientsData(vClients);

    system("pause>0");
    return 0;
}