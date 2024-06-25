#include <cstdlib>
#include <iostream>
using namespace std;
// Atm PIN

string RedPinCode()
{
    string PIN;

    cout << "Enter PIN Code" << endl;
    cin >> PIN;

    return PIN;
}

bool Login()
{
    string PinCode;

    do {
        PinCode = RedPinCode();
        if (PinCode == "1234") {
            return 1;
        } else {
            cout << "\nWron PIN\n";
            system("color 4F");
        }
    } while (PinCode != "1234");
    return 0;
}

int main()
{
    if (Login()) {
        system("color 2F");
        cout << "\nYour balance is " << 7500 << endl;
    }
}
