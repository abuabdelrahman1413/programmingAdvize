#include <iostream>
using namespace std;
struct stInfo
{
    string FirstName;
    string LastName;
    short Age;
    string Phone;
};
void ReadPersons(stInfo Persons[2])
{
    Persons[0].FirstName = "Mohammed";
    Persons[0].LastName = "Said";
    Persons[0].Age = 31;
    Persons[0].Phone = "0118118620";

    Persons[1].FirstName = "Ali";
    Persons[1].LastName = "Mohammed";
    Persons[1].Age = 30;
    Persons[1].Phone = "0996677702";
}
void PrintPersons(stInfo Persons[2])
{
    cout << Persons[0].FirstName <<endl;
    cout << Persons[0].LastName <<endl; 
    cout << Persons[0].Age << endl; 
    cout << Persons[0].Phone << endl;

    cout << Persons[1].FirstName <<endl;
    cout << Persons[1].LastName <<endl; 
    cout << Persons[1].Age << endl; 
    cout << Persons[1].Phone << endl;


    
}
int main ()
{   
    stInfo Persons[2];
    ReadPersons(Persons);
    PrintPersons(Persons);

    
}