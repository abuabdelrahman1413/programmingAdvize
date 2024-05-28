#include <iostream>
using namespace std;
enum enColor { Red, Green, Yellow, Blue };
enum enGender { Male, Female };
enum enMaritalStatus { Single, Married };

struct stAddress
{
    string streetName;
    string BuldingNo;
    string POBox;
    string ZipCode;
};
struct stContactInfo
{
    string Phone;
    string Email;
    stAddress Address;
};
struct stPersonal
{
    string FirstName;
    string LastName;
    stContactInfo ContactInfo;
    enMaritalStatus MaritalStatus;
    enGender Gender;
    enColor Color;
};

/// main - The entry point
/// @return: return 0 for success 
int main ()
{
    stPersonal person1;
    person1.FirstName = "Mohammed";
    person1.LastName = "Said";
    person1.ContactInfo.Email = "ms22abuabdelrahman@gmail.com";
    person1.ContactInfo.Phone = "0118118620";
    person1.ContactInfo.Address.streetName = "Al-Qubba";
    person1.Gender = enGender::Male;
    cout <<person1.FirstName ;
    cout <<" "<<person1.LastName << endl;
    cout <<person1.ContactInfo.Email << endl;
    cout <<person1.ContactInfo.Phone << endl;
    cout <<person1.ContactInfo.Address.streetName << endl;
    cout <<person1.Gender << endl;
    return 0;
}