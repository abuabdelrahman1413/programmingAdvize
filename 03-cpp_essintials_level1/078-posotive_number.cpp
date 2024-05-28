#include <iostream>
using namespace std;

int posotive_number()
{
    int number;
    cout << "please entre a posotive number:\n" ;
    cin >> number;

    while (number < 0)
    {
        cout << "Wrong Number, " ;
        cout << "Please enter a posotive number: "<<"\n";
        cin >> number;
    }
    return number;
}

int main ()
{
    
    int number = posotive_number();
    cout << "The number is " << number << endl;
}