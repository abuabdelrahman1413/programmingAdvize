#include <iostream>

using namespace std;

void mySumPreocedure()
{
    int num1, num2,sum;
    cout << "Enter num1: " << endl;
    cin >> num1;
    cout << "Enter num2: " << endl;
    cin >> num2;
    sum = num1 + num2;
    cout << sum << endl ;
    cout << "*******************************" << endl;
}
int mySumFunction()
{
    int num1, num2,sum;
    cout << "Enter num1: " << endl;
    cin >> num1;
    cout << "Enter num2: " << endl;
    cin >> num2;
    sum = num1 + num2;
    return sum;
}

int main ()
{
    mySumPreocedure();

    cout << endl;

    cout << (mySumFunction() + 2 )/10 << endl;
}