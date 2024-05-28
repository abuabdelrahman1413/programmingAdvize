#include <iostream>
using namespace std;
#include <cmath>
int main ()
{
    short n,a,b,c ;
    cout << "Enter n: " << endl;
    cin >> n;
    a = n * n;
    b = n * a;
    c = n * b;
    cout << "a is " << a << endl;
    cout << "b is " << b << endl;
    cout << "c is " << c << endl;
    cout << "**************************" << endl;
    cout << "a is " << round(a) << endl;
    cout << "b is " << round(b) << endl;
    cout << "c is " << round(c) << endl;

} // namespace std;
