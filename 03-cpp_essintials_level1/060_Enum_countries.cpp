#include <iostream>
using namespace std;
enum enCountry { Jordan=1, Ksa=2, Sudan=3, Egypt=4, other=5 };
void ShowMenu()
{
    cout << "*************************************\n";
    cout << "Please chose Then Number of your Country:\n";
    cout << "[1] Jordan\n";
    cout << "[2] Ksa\n";
    cout << "[3] Sudan\n";
    cout << "[4] Egypt\n";
    cout << "[5] Other\n";
    cout << "*************************************\n\n";
    cout << "Your choise? ";
}
enCountry ReadCountry()
{
    short c;
    enCountry country;
    cin >> c;
    country = (enCountry) c;
    return country;
}
void GetCountry(enCountry country)
{
    switch (country)
    {
        case enCountry::Egypt:
            cout << "Your country  is Egypt" << endl;
            break;
        case enCountry::Sudan:
            cout << "Your country  is Sudan" << endl;
            break;
        case enCountry::Jordan:
            cout << "Your country  is Jordan" << endl;
            break;
        case enCountry::Ksa:
            cout << "Your country  is Ksa" << endl;
            break;
        case enCountry::other:
            cout << "Your country  is not in the list" << endl;
            break;
        default:
            cout << "Invalid option" << endl;
    }
}
int main ()
{
    ShowMenu();
    GetCountry(ReadCountry());
    cout << endl;
}