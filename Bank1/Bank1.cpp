#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <iomanip>
using namespace std;

enum enMainMenuOptions
{
    eShowClientList = 1,
    eAddNewClient = 2,
    eDeleteClient = 3,
    eUpdateClientInformation = 4,
    eFindClient = 5,
    eExit = 6
};

struct sClient
{
    string AccountNumber;
    string pin;
    string Name;
    string phone;
    double AccountBalance;
    bool MarkForDelete = false;
};
void ShowMainMenu();

vector<string> SplitString(string str, string sep)
{
    vector<string> vString;
    size_t pos = 0;
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



const string ClientsFileName = "clients.txt";


void print(sClient client)
{
    cout << "Account Number: " << client.AccountNumber << endl;
    cout << "Price: " << client.pin << endl;
    cout << "Name: " << client.Name << endl;
    cout << "Phone: " << client.phone << endl;
    cout << "Account Balance: " << client.AccountBalance << endl;
}

bool ClientExistByAccountNumber(string AccountNumber, string FileName)
{
	vector<sClient> vClients = LoadClientsDataFromFile(FileName);
	for (sClient &client : vClients)
	{
		if (client.AccountNumber == AccountNumber)
		{
			return true;
		}
	}
	return false;

}

sClient ReadNewClient()
{
    sClient client;
    cout << "Enter Account Number: ";
    cin.ignore();  // Ignoring leftover whitespaces or newlines
    getline(cin, client.AccountNumber);
    while (ClientExistByAccountNumber(client.AccountNumber, ClientsFileName))
    {
		cout << "\nClient with this Account Number already exists, please enter a new Account Number: ";
		getline(cin, client.AccountNumber);
    }

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
    for (string& word : vString)
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

void AddNewClients()
{
    char AddMore = 'Y';

    do
    {
        cout << "Adding New Clients:\n\n";

        AddNewClient();

        cout << "\nClient Added successfully, do you want to add more clients? (Y/N): ";
        cin >> AddMore;
    } while (toupper(AddMore) == 'Y');
}


void PrintClientRecord(sClient Client)
{
    cout << "| " << left << setw(15) << Client.AccountNumber;
    cout << "| " << left << setw(10) << Client.pin;
    cout << "| " << left << setw(40) << Client.Name;
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

void SaveClientsDataToFile(vector<sClient> vClients, string FileName)
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
}

void MarkClientForDeleteByAccountNumber()
{
	vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);
	string AccountNumber;
	cout << "Enter Account Number to delete: ";
	cin >> AccountNumber;
	for (sClient& Client : vClients)
	{
		if (Client.AccountNumber == AccountNumber)
		{
			Client.MarkForDelete = true;
			break;
		}
	}
	SaveClientsDataToFile(vClients, ClientsFileName);
}

void DeleteClientByAccountNumber()
{
	MarkClientForDeleteByAccountNumber();
    cout << "Client deleted successfully!";
}

short ReadMainMenuOption()
{
    short Option;
    cout << "Please enter your option [1-6]: ";
    cin >> Option;
    return Option;
}
void GoBackToMainMenu()
{
    cout << "Press any key to go back to Main Menu...";
    system("pause");
    ShowMainMenu();
}
void ShowAllClientsScreen()
{
    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    cout << "\n\t\t\t\t\tClient List(" << vClients.size() << ") Client(s).";
    cout << "\n==============================================================================================\n";
    cout << "\n==============================================================================================\n";
    cout << "| " << left << setw(15) << "Account Number";
    cout << "| " << left << setw(10) << "Pin Code";
    cout << "| " << left << setw(40) << "Client Name";
    cout << "| " << left << setw(12) << "Phone";
    cout << "| " << left << setw(12) << "Balance";
    cout << "\n==============================================================================================\n";

    if (vClients.size() == 0)
    {
        cout << "\t\t\t\tNo Clinets Available in The System\n";
    }
    else
    {
        for (sClient Client : vClients)
        {
            PrintClientRecord(Client);
            cout << endl;
        }
        cout << "\n==============================================================================================\n";
    }
}
void ShowAddNewClientScreen()
{
    cout << "\n=======================================================\n";
    cout << "\t\tAdd New Client Screen\n";
    cout << "=======================================================\n";
    AddNewClients();
}

void ShowDeleteClientScreen()
{
    cout << "\n=======================================================\n";
    cout << "\t\Delete Client Screen\n";
    cout << "=======================================================\n";
    DeleteClientByAccountNumber();
}
void PerformMainMenuOption(enMainMenuOptions MainMenuOption)
{
    switch (MainMenuOption)
    {
    case enMainMenuOptions::eShowClientList:
    {
        system("cls");
        ShowAllClientsScreen();
        GoBackToMainMenu();
        break;
    }
    case enMainMenuOptions::eAddNewClient:
    {
        system("cls");
        ShowAddNewClientScreen();
        GoBackToMainMenu();
        break;
    }
	case enMainMenuOptions::eDeleteClient:
	{
		system("cls");
		ShowDeleteClientScreen();
		GoBackToMainMenu();
		break;
	}
    default:
    {
        break;
    }
    }

    system("pause");

}
void ShowMainMenu()
{
    system("cls");
    cout << "=======================================================\n";
    cout << "\t\tMain Menu Screen\n";
    cout << "=======================================================\n";
    cout << "\t[1] Show Client List\n";
    cout << "\t[2] Add New Client\n";
    cout << "\t[3] Delete Client\n";
    cout << "\t[4] Update Client Information\n";
    cout << "\t[5] Find Client\n";
    cout << "\t[6] Exit\n";
    cout << "=======================================================\n";
    PerformMainMenuOption((enMainMenuOptions)ReadMainMenuOption());
}
int main()
{
    ShowMainMenu();
    system("pause");
    return 0;
}