#include <iostream>
using namespace std;
struct stContact
{
    string phone;
    string email;
    string telegram;
};

struct personalInfo
{
    string name;
    string city;
    string country;
    char gender;
    short age;
    short monthlySalary;
    int yearlySalary;
    bool isMarried;
    stContact contact;
};

void ReadInfo(personalInfo &Info)
{
    cout << "Enter your name : " << endl;
    cin >> Info.name;
    
    cout << "Enter your city : " << endl;
    cin >> Info.city;
    
    cout << "Enter your country : " << endl;
    cin >> Info.country;
   
    
    cout << "Enter your gender ( M , F) : " << endl;
    cin >> Info.gender;
    
    
    cout << "Enter your Age : " << endl;
    cin >> Info.age;

    cout << "Enter your salary : " << endl;
    cin >> Info.monthlySalary;
    
    
    
    cout << "Are you married: " << endl;
    cin >> Info.isMarried;
    
    cout << "Enter your phone" << endl;
    cin >> Info.contact.phone;
   
    cout << "Enter your email" << endl;
    cin >> Info.contact.email;
    
    cout << "Enter your telegram" << endl;
    cin >> Info.contact.telegram;
    
    
}
void PrintInfo(personalInfo Info)
{
    cout << "********************\n";
    cout << "Name: " << Info.name<< endl;
    cout << "Age: " << Info.age << " Years" << endl;
    cout << "City: " << Info.city << endl;
    cout << "Country: " << Info.country << endl; 
    cout << "Monthly salary:  " << Info.monthlySalary << endl;
    Info.yearlySalary = 12*Info.monthlySalary;
    cout << "Yearly salary: " << Info.yearlySalary << endl;
    cout << "Gender: " << Info.gender << endl;
    cout << "Married: " << Info.isMarried << endl;
    cout << "Phone: " << Info.contact.phone << endl;
    cout << "Email: " << Info.contact.email << endl;
    cout << "Telegram: " << Info.contact.telegram << endl;
    cout << "********************\n";
}
int main(void){
    
    personalInfo person1;
    ReadInfo(person1);
    PrintInfo(person1);
    
    
}