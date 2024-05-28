#include <iostream>
using namespace std;

enum enScreenColor { Red=1, Blue=2, Yellow=3, Green=4 };

int main()
{
    cout << "*************************************\n";
    cout << "Please chose Then Number of your color:\n";
    cout << "[1] Red\n";
    cout << "[2] Blue\n";
    cout << "[3] Yellow\n";
    cout << "[4] Green\n";
    cout << "*************************************\n\n";
    cout << "Your choise? ";

    int c;
    enScreenColor color;

    cin >> c;
    color = (enScreenColor) c; //castin Exiplict

    if (color == enScreenColor::Red)
    {
        system("color 4F");
    }
    else if (color == enScreenColor::Blue)
    {
        system("color 1F");
    }
     else if (color == enScreenColor::Yellow)
    {
        system("color 6F");
    }
     else if (color == enScreenColor::Green)
    {
        system("color 2F");
    }
}
