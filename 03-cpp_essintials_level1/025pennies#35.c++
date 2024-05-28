#include <iostream>

using namespace std;

int main(void) {
    short penny, nickel, dime, quarter, dollar;
    float totalPennies, totalDollars;

    // Prompt for user input before calculating totals
    cout << "Enter penny: " << endl;
    cin >> penny;

    cout << "Enter nickel: " << endl;
    cin >> nickel;

    cout << "Enter dime: " << endl;
    cin >> dime;

    cout << "Enter quarter: " << endl;
    cin >> quarter;

    cout << "Enter dollar: " << endl;
    cin >> dollar;

    // Calculate total pennies and dollars
    totalPennies = penny + 5 * nickel + 10 * dime + 25 * quarter + 100 * dollar;
    totalDollars = totalPennies / 100;

    // Display total pennies and dollars
    cout << "Total pennies is : " << totalPennies << endl;
    cout << "Total dollars is : " << totalDollars << endl;

    return 0;
}