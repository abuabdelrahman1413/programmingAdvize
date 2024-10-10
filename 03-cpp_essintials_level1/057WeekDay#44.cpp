#include <iostream>
using namespace std;

int main()
{
    int Day ;

    cout << "Enter The Day: " << endl;
    cin >> Day;

    switch (Day)
    {
        case 1:
            cout << ("Friday\n");
            break;
        case 2:
            cout << ("Sat\n");
            break;
        case 3:
            cout << ("sun\n");
            break;
        case 4:
            cout << ("Mon\n");
            break;
        case 5:
            cout << ("Tue\n");
            break;
        case 6:
            cout << ("Wed\n");
            break;
        case 7:
            cout << ("Thr\n");
            break;
        default:
            cout << ("Invalid Day\n");
    }
}