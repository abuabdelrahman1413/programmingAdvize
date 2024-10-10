#include <iostream>
using namespace std;

int main()
{
    int i=1,n,sum=0;
    for (i; i <= 5; i++)
    {
        cout << "Please enter a number: \n";
        cin >> n;
        if ( n > 50){
           
            cout << "The number is greater than 50 and won't be calculated\n";
             continue;
        }
        sum = sum + n;
        
    }

    cout << sum << endl;
}