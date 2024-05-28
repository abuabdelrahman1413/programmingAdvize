#include <iostream>

using namespace std;

// void myFunction (int n)
// {
//     n = 5000;
//     cout << "Number inside function is: " << n << endl;
// }

// int main ()
// {
//     int n = 1000;
//     myFunction(n);
//     cout << "Number inside main is: " << n << endl;
// }

void myFunction (int &n)
{
    n = 5000;
    cout << "Number inside function is: " << n << endl;
}

int main ()
{
    int n = 1000;
    myFunction(n);
    cout << "Number inside main is: " << n << endl;
}