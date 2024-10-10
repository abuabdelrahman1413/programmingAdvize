#include <iostream>
using namespace std;
void read_numbers(int &n, int &m){
    
    cout << "Enter N: " <<endl;
    cin >> n;

    cout << "Enter M: " <<endl;
    cin >> m;
    
    }
int power(int n,int m)
{
    //power to m
    int f=1, i  = 1;
	cout << "***********" << endl;
    while ( i <= m ){
        
            f = f * n;
            i++;
        }
        return f;
}
int main()
{
    int n, m;
    read_numbers(n ,m);
    cout << power(n,m) << endl;
        
}
