#include <iostream>
using namespace std;

int main()
{
    int TotalSales ;

    cout << "Enter your Total sales: " << endl;
    cin >> TotalSales;

    if (TotalSales >= 1000000)
        cout << (TotalSales*1)/100;
    else if (TotalSales > 500000 && TotalSales < 1000000)
    {
      cout << (TotalSales*2)/100; 
    }
    else if (TotalSales > 100000 && TotalSales < 500000)
    {
        cout << (TotalSales*3)/100;
    }
    else if (TotalSales > 50000 && TotalSales < 100000)
    {
        cout << (TotalSales*5)/100;
    }
    
    else
    {
       cout << (TotalSales*0)/100;
    }
 
}