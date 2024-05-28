#include <iostream>

using namespace std;

int main(void) {
    unsigned int total;
    unsigned short days, hours, minutes, seconds;
    

    // Prompt for user input before calculating totals
    cout << "Enter total: " << endl;
    cin >> total;
    days = total/(3600*24);
    hours = (total%(3600*24))/3600;
    minutes = ((total%(3600*24))%3600)/60;
    seconds = ((total%(3600*24))%3600)%60;
    // Display total pennies and dollars
    cout << "Total seconds is : " << days << endl;
    cout << "Total seconds is : " << hours << endl;
    cout << "Total seconds is : " << minutes << endl;
    cout << "Total seconds is : " << seconds << endl;

    

    return 0;
}