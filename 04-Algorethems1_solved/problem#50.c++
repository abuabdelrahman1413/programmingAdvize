#include <cstdlib>
#include <iostream>
using namespace std;
// Atm PIN 3 times

string RedPinCode()
{
    string PIN;

    cout << "\nEnter PIN Code" << endl;
    cin >> PIN;

    return PIN;
}

bool Login()
{
    string PinCode;
    int i = 3;

    do {
        i--;
        PinCode = RedPinCode();
        if (PinCode == "1234") {
            return 1;
        } else {

            system("color 4F");
            cout << "\nWron PIN, you have " << i << " tries" << endl;
        }
    } while (PinCode != "1234 " && i >= 1);
    return 0;
}

int main()
{
    if (Login()) {
        system("color 2F");
        cout << "\nYour balance is " << 7500 << endl;
    } else {
        cout << "\nYour card blocked" << endl;
    }
}
