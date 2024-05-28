#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int Number;
    string Name;
    string Country;

    cout << "Enter your Number: " << endl;
    cin >> Number;

    cout << "Enter your Name: " << endl;
    cin.ignore(1,'\n'); // with getline
    getline(cin, Name);

    cout << "Enter your Country: " << endl;
    cin >> Country ;

    return 0;
}

    
