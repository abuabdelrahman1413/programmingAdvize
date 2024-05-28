#include <iostream>
using namespace std;

float ReadPosotiveNumber (string Message)
{
    float Number = 0;
    do {
    cout << Message << endl;
    cin >>Number;
    }while (Number <= 0);
return Number;
}

float TotalBiillAfterServiceAndTax(float TotalBill)
{
    float TotalBillAfter10 = TotalBill + (TotalBill*0.1);
    float TotalBillAfter16 = TotalBillAfter10 + (TotalBillAfter10*0.16);
    return TotalBillAfter16;
}
int main()
{
    float TotalBill = ReadPosotiveNumber("Please enter The Total Bill?");
    cout << "Total Bill = " <<TotalBill<<endl;
    cout << "Total Bill After Service Fee and Tax = " <<TotalBiillAfterServiceAndTax(TotalBill) <<endl;
}
