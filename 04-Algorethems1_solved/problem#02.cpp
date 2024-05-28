#include <iostream>
using namespace std;
//print your Name by cin

string Read_Name()
{
    string Name;
    
    cout << "Please enter your Name? \n";
    getline(cin, Name);
    return Name;
}

void Print_Name(string Name)
{
    cout <<"\nYour Name is: " << Name << endl;
}

int main()
{
    
    Print_Name(Read_Name());
}