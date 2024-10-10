#include <iostream>
using namespace std;
struct stDriverInfo
{
    string Name;
    short Age;
    bool License;
};
void ReadInfo(stDriverInfo &Info)
{
    cout << "Enter your Name: " << endl;
    cin >> Info.Name;
    cout << "Enter your Age: " << endl;
    cin >> Info.Age;
    cout << "Enter your license: " << endl;
    cin >> Info.License;
}
void checkDriver(stDriverInfo Info)
{
    if (Info.Age >21 && Info.License == true)
    {
        cout << Info.Name << " Accepted" << endl;

    }
    else
        cout << Info.Name << " Rejected" << endl;
    
}
int main()
{
    stDriverInfo driver1;
    ReadInfo (driver1);
    checkDriver(driver1);
}
