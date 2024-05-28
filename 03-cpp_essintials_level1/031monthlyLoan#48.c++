#include <iostream>
using namespace std;
int main()
{
    unsigned int loanAmount;
    unsigned short monthlyPayment, months;
    cout << "Enter loa amount: "<<endl;
    cin >> loanAmount;
    cout << "Enter months: " <<endl;
    cin >> months;
    monthlyPayment = loanAmount / months;
    cout << "months is: " << monthlyPayment << endl;
} // namespace std;
