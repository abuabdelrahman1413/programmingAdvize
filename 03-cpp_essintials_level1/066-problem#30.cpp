#include <iostream>
using namespace std;
void read_number(int &n){
    cout << "Enter number: " << endl;
    cin >> n;
    while (n < 0)
    {
        cout << "Wrong Number, " ;
        cout << "Please enter a posotive number: "<<"\n";
        cin >> n;
    }
    
}
int factorial (int n){
    int f=1,i = 1;
    while ( i <= n ){
        
            f = f * i;
            i++;
        }
        
    return f;
}
int main()
{
    //faatorial
    int n;
    
	cout << "***********" << endl;
    
    read_number(n);

    cout << factorial(n) << endl;
        
}
