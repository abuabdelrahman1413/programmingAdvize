
#include <iostream>
using namespace std;

int main()
{
    short Age;

    cout << "Enter your Age: " << endl;
    cin >> Age;

    if (Age >= 18 && Age <= 45)
        cout << "valid\n";
    else    
        cout << "Invalid\n";
}