#include <iostream>

using namespace std;

struct strInfo 
{
    string Name;
    string Phone;
    short age;
};

void ReadInfo(strInfo &Info)
{
    cout << "Enter your Name: " << endl;
    cin.ignore(1,'\n');
    getline(cin,Info.Name);
    cout << "Enter your Phone: " << endl;
    cin >> Info.Phone;
    cout << "Enter your Age: " << endl;
    cin >> Info.age;
}
void PrintInfo(strInfo Info)
{
    cout <<"\n****************************"<<endl;
    cout << "Name: " << Info.Name <<endl;
    cout << "Phone: " << Info.Phone <<endl;
    cout << "Age: " << Info.age<<endl;
    cout <<"\n****************************"<<endl;
}

int main ()
{
    strInfo person1Info;
    ReadInfo(person1Info);
    PrintInfo(person1Info);

    strInfo person2Info;
    ReadInfo(person2Info);
    PrintInfo(person2Info);
}