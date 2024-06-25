#include <iostream>
#include <ratio>
using namespace std;
// commision percentage
// ReadTotalSales()
float ReadTotalSales()
{
    int TotalSales;
    cout <<"Please enter a Total Sales?\n";
    cin >> TotalSales;
    return TotalSales;
}
float GetComissionPercentage(float TotalSales)
{
    if (TotalSales >= 1000000) {
    return 0.01;
    }
    else if (TotalSales >= 500000) {
    return 0.02;
    }
    else if (TotalSales >= 100000) {
        return 0.03;
    }
    else if (TotalSales >= 50000) {
        return 0.05;
    }
    else {
    return 0.00;
    }

}
float CalculateTotalcommision(float TotalSales)
{
    return GetComissionPercentage(TotalSales) *TotalSales;
}
int main()
{
    float TotalSales = ReadTotalSales();
    float commision = GetComissionPercentage(TotalSales);
    cout << "commision percentage = " <<commision<<endl;
    float Total_Commision = CalculateTotalcommision(TotalSales);
    cout << "Total commision = " <<Total_Commision << endl;
}
