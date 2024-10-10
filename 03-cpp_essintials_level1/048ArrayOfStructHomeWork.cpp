#include <iostream>
using namespace std;
struct stPersonalInfo
{
    string FirstName;
    string LastName;
    short Age;
    string Phone;
};
void ReadInfo(stPersonalInfo &Info)
{
    cout << "Enter FirstName: " << endl;
    cin >> Info.FirstName;

    cout << "Enter LastName: " << endl;
    cin >> Info.LastName;

    cout << "Enter Age: " << endl;
    cin >> Info.Age;

    cout << "Enter Phone: " << endl;
    cin >> Info.Phone;
    cout << endl;
}
void PrintInfo (stPersonalInfo Info)
{
    cout << "\n***************************************************\n";
    cout << Info.FirstName << endl;
    cout << Info.LastName << endl;
    cout << Info.Age << endl;
    cout << Info.Phone << endl;
    cout << "\n***************************************************\n";
}
void ReadInfoArray (stPersonalInfo person[100], int &n)
{
    int i = 0;
    cout << "Enter number of persons: " << endl;
    cin >> n;
    
    for ( i; i <= n-1; i++){
         cout << "Please enter person's " << i+1 << " info:" << endl;
         ReadInfo(person[i]);
    }
}
void PrintInfoArray (stPersonalInfo person[100], int n)
{
   int i = 0;
    for ( i; i <= n-1; i++){
        cout <<"person's " << i+1 << " info";
         PrintInfo(person[i]);
    }
}
int main()
{
    stPersonalInfo person[100];
    int n = 0;
    ReadInfoArray(person,n);
    PrintInfoArray(person,n);
}