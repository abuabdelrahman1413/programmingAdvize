#include <iostream>

using namespace std;
unsigned int  ReadInfo ()
{
    // Prompt for user input before calculating totals
    
    cout << "Enter days: " << endl;
    cin >> days;

    cout << "Enter hours: " << endl;
    cin >> hours;

    cout << "Enter miutes: " << endl;
    cin >> minutes;

    cout << "Enter seconds: " << endl;
    cin >> seconds;

      // Calculate total seconds
    total = days*24*3600 + hours*3600 + minutes*60 + seconds;

    return total;

}

int main(void) {
    
    

    
  

  
    // Display total pennies and dollars
    cout << "Total seconds is : " << ReadInfo() << endl;
    

    return 0;
}