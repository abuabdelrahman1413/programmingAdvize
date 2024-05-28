#include <iostream>

using namespace std;

int x = 6000;
int y = 8000;

void Function()
{
    int x = 50;
    int y = x+10;
    cout << "local variable x: " << x << endl;
    cout << "local variable y: " << y << endl;
    cout << "global variable x: " << ::x << endl;
    cout << "global variable y: " << ::y << endl;
}

int main ()
{
    int x = 400;
    int y = x+50;
    Function();
    cout << "local variable x: " << x << endl;
    cout << "local variable y: " << y << endl;
    cout << "global variable x: " << ::x - 1000 << endl;
    cout << "global variable y: " << ::y - 2000 << endl;
    return 0;
}