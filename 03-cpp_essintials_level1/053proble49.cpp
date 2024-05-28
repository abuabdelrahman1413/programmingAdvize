#include <iostream>
using namespace std;

int main()
{
 int  n = 1;
  while ( n <= 3)
  {
      short ATMPin;
    int Balnce = 75000;

    cout << "Enter your ATM Pin: " << endl;
    cin >> ATMPin;

    if (ATMPin == 1234)
        cout << Balnce << " $\n";
    else    
        cout << "Invalid ATM pin\n";
    n++;
  }
  cout << "You try 3 time we suspend your Account\n";

}