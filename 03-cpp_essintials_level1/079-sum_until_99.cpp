#include <iostream>
using namespace std;
int main()
{
    
    short n, sum=0;
    cout << "Enter N: " <<endl;
    cin >> n;
    
	cout << "***********" << endl;
    while ( n != 99 ){
        
            sum = sum + n;
             cout << "Enter N: " <<endl;
            cin >> n;
        
        
    }
    cout << sum << endl;
        
}
